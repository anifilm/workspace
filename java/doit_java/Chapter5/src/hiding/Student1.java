// private 사용하기
package hiding;

public class Student1 {
    int studentID;
    private String studentName;     // studentName 변수를 private으로 선언
    int grade;
    String address;

    public String getStudentName() {
        return studentName;
    }
    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
}