// 학생 이름을 부여하는 메서드
package classpart;

public class Student4 {
    int studentID;
    String studentName;
    int grade;
    String address;

    // 학생의 이름을 반환하는 메서드
    public String getStudentName() {
        return studentName;
    }

    // 학생의 이름을 부여하는 메서드
    public void setStudentName(String name) {
        studentName = name;
    }
}