// 학번 확인하기
package staticex;

public class StudentTest2 {

    public static void main(String[] args) {

        Student1 studentLim = new Student1();
        studentLim.setStudentName("임채영");
        System.out.println(studentLim.serialNum);
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentID);

        Student1 studentJung = new Student1();
        studentJung.setStudentName("정흥규");
        System.out.println(studentJung.serialNum);
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentID);
    }
}