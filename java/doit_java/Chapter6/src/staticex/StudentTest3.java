// 클래스 이름으로 static 변수 참조하기
package staticex;

public class StudentTest3 {

    public static void main(String[] args) {

        Student1 studentLim = new Student1();
        studentLim.setStudentName("임채영");
        System.out.println(Student1.serialNum); // serialNum 변수를 직접 클래스 이름으로 참조
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentId);

        Student1 studentJung = new Student1();
        studentJung.setStudentName("정흥규");
        System.out.println(Student1.serialNum); // serialNum 변수를 직접 클래스 이름으로 참조
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentId);
    }
}
