package chap07.excercise.Q5_1;
import java.util.*;

public class StudentManager {
    private Scanner scanner;
    private ArrayList<Student> dept;

    public StudentManager() {
        scanner = new Scanner(System.in);
        dept = new ArrayList<>();
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
            dept.add(student);  // ArrayList에 저장
        }
    }
    public void printAll() {
        Iterator<Student> it = dept.iterator();
        System.out.println("---------------------------");
        while (it.hasNext()) {
            Student student = it.next();
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
            for (int i = 0; i < dept.size(); i++) {    // dept에 있는 모든 학생 검색
                Student student = dept.get(i);         // i번째 학생 객체
                if (student.getName().equals(name)) {  //  이름이 같은 Student 찾음
                    System.out.print(student.getName() + ", ");
                    System.out.print(student.getDepartment() + ", ");
                    System.out.print(student.getId() + ", ");
                    System.out.println(student.getGrade());
                    break;
                }
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
