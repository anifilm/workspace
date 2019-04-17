package staticex;

public class StudentTest {

    public static void main(String[] args) {

        Student studentLim = new Student();
        studentLim.setStudentName("임채영");
        System.out.println(studentLim.serialNum);       // serialNum 변수의 초기값 출력
        studentLim.serialNum++;                         // static 변수값 증가

        Student studentJung = new Student();
        studentJung.setStudentName("정흥규");
        System.out.println(studentJung.serialNum);      // 증가된 값 출력
        System.out.println(studentLim.serialNum);       // 증가된 값 출력
    }
}