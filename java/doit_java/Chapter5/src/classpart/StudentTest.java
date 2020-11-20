package classpart;

public class StudentTest {
    public static void main(String args[]) {

        Student studentLim = new Student(); // Student 클래스 생성
        studentLim.studentName = "임채영";

        System.out.println(studentLim.studentName);     // 멤버 변수 사용
        System.out.println(studentLim.getStudentName());// 메서드 사용
    }
}