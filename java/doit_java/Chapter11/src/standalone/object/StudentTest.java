/*
나 혼자 코딩!
toString() 메서드 직접 재정의하기
기존에 만든 Studnet 클래스의 toString() 메서드를 재정의하여 Student 클래스의
참조 변수를 출력할 때 학생의 이름과 학번이 출력되도록 프로그램을 구현해 보세요.
 */
package standalone.object;

class Student {
    int studentId;
    String studentName;

    public Student(int studentId, String studentName) {
        this.studentId = studentId;
        this.studentName = studentName;
    }

    @Override
    public String toString() {
        return studentId + ", " + studentName;
    }
}

public class StudentTest {
    public static void main(String[] args) {

        Student studentLim = new Student(1001, "임채영");

        System.out.println(studentLim);
    }
}
