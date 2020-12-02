// 학번 확인하기
package chap06.section3.staticex2;

public class StudentTest2 {
    public static void main(String[] args) {

        Student studentLim = new Student();
        studentLim.setStudentName("임채영");
        System.out.println(studentLim.serialNum);
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentId);

        Student studentJung = new Student();
        studentJung.setStudentName("정흥규");
        System.out.println(studentJung.serialNum);
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentId);
    }
}
