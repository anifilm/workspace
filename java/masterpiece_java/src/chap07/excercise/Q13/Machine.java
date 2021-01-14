package chap07.excercise.Q13;
import java.util.*;

public class Machine {
    private String name;
    private HashMap<String, Integer> memory;
    private Vector<Instruction> program;
    private Scanner scanner;

    public Machine(String name) {
        this.name = name;
        memory = new HashMap<>();
        program = new Vector<>();
        scanner = new Scanner(System.in);
    }
    public void readProgramIntoMemory() {
        while (true) {
            System.out.print(">> ");
            String line = scanner.nextLine();
            if (line.toUpperCase().equals("GO")) break;
            program.add(new Instruction(line));
        }
    }
    public void clearMemory() {
        program.removeAllElements();  // 벡터의 모든 요소 삭제
        memory.clear();
    }
    public void error(int pc, String msg) {
        System.out.print("프로그램 라인 " + (pc+1) + "에서 오류. " + msg);
    }
    public void execute() {
        int pc = 0;
        while (true) {
            Instruction instruction = program.get(pc);
            pc++;  // 미리 다음 명령의 주소로 설명
            switch(instruction.getOpcode()) {
                case "MOV":
                    mov(instruction);
                    break;
                case "ADD":
                    add(instruction);
                    break;
                case "SUB":
                    sub(instruction);
                    break;
                case "JN0":
                    int newAddr = jn0(instruction);
                    if (newAddr == -1)  // no jump
                        break;
                    else {
                        pc = newAddr;
                        break;
                    }
                case "PRT":
                    prt(instruction);
                    return;
                default:
                    error(instruction);
                    return;
            }
        //  printVariables(instruction);  // 이 메서드를 실행하면 실행 중에 변하는 변수를 모두 볼 수 있음
        }
    }
    private void error(Instruction instruction) {
        System.out.print("명령 오류! ");
        printVariables(instruction);
    }
    private void printVariables(Instruction instruction) {
        System.out.print(instruction + "\n");
        Set<String> s = memory.keySet();
        Iterator<String> it = s.iterator();
        while (it.hasNext()) {
            String variable = it.next();
            int value = memory.get(variable);
            System.out.print(variable + ": " + value + "\t");
        }
        System.out.println();
    }
    private void mov(Instruction instruction) {
        String variable = instruction.getOperand(0);  // 첫 번째는 변수
        String second = instruction.getOperand(1);    // 두 번째는 값
        int n = getValue(second);
        memory.put(variable, n);  // 변수에 값 저장
    }
    private void add(Instruction instruction) {
        String first = instruction.getOperand(0);
        String second = instruction.getOperand(1);
        int n = getValue(first);
        int m = getValue(second);
        memory.put(first, n+m);
    }
    private void sub(Instruction instruction) {
        String first = instruction.getOperand(0);
        String second = instruction.getOperand(1);
        int n = getValue(first);
        int m = getValue(second);
        memory.put(first, n-m);
    }
    private int jn0(Instruction instruction) {  // 첫번째 피연산자가 0이 아니면 두번째 피연산자의 주소로 점프
        String first = instruction.getOperand(0);
        String second = instruction.getOperand(1);
        int n = getValue(first);
        int m = getValue(second);
        if (n != 0)     // n이 0이 아니면
            return m;   // 점프할 주소
        else
            return -1;  // 점프 없이 다음으로 진행
    }
    private void prt(Instruction instruction) {  // 첫번째 피연산자 값을 출력하고 종료. 두번째 피연산자는 의미없음
        String first = instruction.getOperand(0);
        int n = getValue(first);
        printVariables(instruction);
        System.out.println("출력할 결과는 " + n + ". 프로그램 실행 끝");
    }
    private int getValue(String opr) {  // opr이 정수이면 수로 반환. 변수명이면 변수명의 값 반환. 없는 변수이면 새로 만들고 0을 저장후 값 반환
        int n;
        try {
            n = Integer.parseInt(opr);  // opr 피연산자가 정수인 경우
        }
        catch (NumberFormatException e) {  // opr 피연산자가 변수인 경우
            Integer value = memory.get(opr);  // 변수 값 알아내기
            if (value == null) {     // opr 이름의 변수가 없다면
                memory.put(opr, 0);  // opr의 값을 0으로 하여 새 변수 생성
                n = 0;  // 초기 값 0
            }
            else
                n = value;  // opr 변수에 저장된 값
        }
        return n;
    }
    public void run() {
        System.out.println(name + "을 작동합니다. 프로그램을 입력해주세요. GO를 입력하면 실행됩니다.");
        while(true) {
            readProgramIntoMemory();  // "GO" 가 입력될 때까지 읽기
            execute();
            clearMemory();
        }
    }

    public static void main(String[] args) {
        Machine m = new Machine("슈퍼컴");
        m.run();
    }
}
