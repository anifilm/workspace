// 클래스 이름으로 static 변수 참조하기
package chap06.section3.staticex2;

public class StudentTest3 {
    public static void main(String[] args) {

        Student studentLim = new Student();
        studentLim.setStudentName("임채영");
        System.out.println(Student.serialNum); // serialNum 변수를 직접 클래스 이름으로 참조
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentId);

        Student studentJung = new Student();
        studentJung.setStudentName("정흥규");
        System.out.println(Student.serialNum); // serialNum 변수를 직접 클래스 이름으로 참조
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentId);
    }
}
