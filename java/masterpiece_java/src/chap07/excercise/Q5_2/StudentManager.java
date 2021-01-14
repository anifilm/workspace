package chap07.excercise.Q5_2;
import java.util.*;

public class StudentManager {
    private Scanner scanner;
    private HashMap<String, Student> dept;

    public StudentManager() {
        scanner = new Scanner(System.in);
        dept = new HashMap<>();
    }
    public void read() {
        System.out.println("학생 이름, 학과, 학번, 학점 평균을 입력하세요. (콤마','로 구분)");
        for (int i = 0; i < 4; i++) {
            System.out.print(">> ");
            String input = scanner.nextLine();
            StringTokenizer st = new StringTokenizer(input, ",");
            String name = st.nextToken().trim();
            String department = st.nextToken().trim();
            int id = Integer.parseInt(st.nextToken().trim());
            double grade = Double.parseDouble(st.nextToken().trim());

            Student student = new Student(name, department, id, grade);
            dept.put(name, student);  // HashMap에 저장
        }
    }
    public void printAll() {
        Set<String> key = dept.keySet();
        Iterator<String> it = key.iterator();
        System.out.println("---------------------------");
        while (it.hasNext()) {
            String name = it.next();  // 이름 알아냄
            Student student = dept.get(name);  // 이름을 key로하여 HashMap으로 Student 객체 얻어냄
            System.out.println("이름: " + student.getName());
            System.out.println("학과: " + student.getDepartment());
            System.out.println("학번: " + student.getId());
            System.out.println("학점평균: " + student.getGrade());
            System.out.println("---------------------------");
        }
    }
    public void processQuery() {
        while(true) {
            System.out.print("학생 이름 >> ");
            String name = scanner.nextLine();  // 학생 이름 입력
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                return;
            }
            Student student = dept.get(name);  // HashMap에서 이름을 key로 검색
            if (student == null) {  // 이름이 HashMap에 없다면
                System.out.println(name + " 학생 없습니다.");
            }
            else {  // HashMap에서 검색된 Student 객체
                System.out.print(student.getName() + ", ");
                System.out.print(student.getDepartment() + ", ");
                System.out.print(student.getId() + ", ");
                System.out.println(student.getGrade());
            }
        }
    }
    public void run() {
        read();
        printAll();
        processQuery();
    }

    public static void main(String[] args) {
        StudentManager man = new StudentManager();
        man.run();
    }
}
