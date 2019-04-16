package staticex;

public class StudentTest2 {

    public static void main(String[] args) {

        Student2 studentLim = new Student2();
        studentLim.setStudentName("임채영");
        System.out.println(studentLim.serialNum);
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentID);

        Student2 studentJung = new Student2();
        studentJung.setStudentName("정흥규");
        System.out.println(studentJung.serialNum);
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentID);
    }
}