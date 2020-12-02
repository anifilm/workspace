// get(), set() 메서드 사용하기
package chap05.section7.hiding2;

public class Student {
    int studentId;
    private String studentName;
    int grade;
    String address;

    // private 변수인 studentName에 접근해 값을 가져오는 public get() 메서드
    public String getStudentName() {
        return studentName;
    }
    // private 변수인 studentName에 접근해 값을 지정하는 public set() 메서드
    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
}
