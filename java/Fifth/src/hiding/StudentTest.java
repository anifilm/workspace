package hiding;

public class StudentTest {

    public static void main(String[] args) {

        Student studentLim = new Student();
        //studentLim.studentName = "임채영";      // private 접근으로 오류 발생
        studentLim.setStudentName("임채영");      // setStudentName() 메서드를 활용해 private 변수에 접근 가능

        System.out.println(studentLim.getStudentName());
    }
}