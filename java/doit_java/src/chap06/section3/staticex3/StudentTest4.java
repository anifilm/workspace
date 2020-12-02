// 학번 출력하기
package chap06.section3.staticex3;

public class StudentTest4 {
    public static void main(String[] args) {

        Student studentLim = new Student();
        studentLim.setStudentName("임채영");
        System.out.println(Student.getSerialNum());    // serialNum 값을 가져오기 위해 get() 메서드를 클래스 이름으로 직접 호출
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentId);

        Student studentJung = new Student();
        studentJung.setStudentName("정흥규");
        System.out.println(Student.getSerialNum());    // serialNum 값을 가져오기 위해 get() 메서드를 클래스 이름으로 직접 호출
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentId);
    }
}
