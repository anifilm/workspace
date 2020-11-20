// private 변수 테스트하기
package hiding;

public class Student1Test {
    public static void main(String[] args) {

        Student1 studentLim = new Student1();
    //  studentLim.studentName = "임채영";     // private 접근으로 오류 발생

        System.out.println(studentLim.getStudentName());
    }
}