// private 변수 테스트하기
package hiding;

public class Student2Test {
    public static void main(String[] args) {

        Student2 studentLim = new Student2();
    //  studentLim.studentName = "임채영";
        studentLim.setStudentName("임채영");   // setStudentName() 메서드를 활용해 private 변수에 접근 가능

        System.out.println(studentLim.getStudentName());
    }
}