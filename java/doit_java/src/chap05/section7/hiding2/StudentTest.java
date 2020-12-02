// private 변수 테스트하기
package chap05.section7.hiding2;

public class StudentTest {
    public static void main(String[] args) {

        Student studentLim = new Student();
    //  studentLim.studentName = "임채영";
        studentLim.setStudentName("임채영");   // setStudentName() 메서드를 활용해 private 변수에 접근 가능

        System.out.println(studentLim.getStudentName());
    }
}
