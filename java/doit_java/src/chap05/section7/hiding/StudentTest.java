// private 변수 테스트하기
package chap05.section7.hiding;

public class StudentTest {
    public static void main(String[] args) {

        Student studentLim = new Student();
    //  studentLim.studentName = "임채영";     // private 접근으로 오류 발생

        System.out.println(studentLim.getStudentName());
    }
}
