// 학생 이름을 반환하는 메서드, 학생 이름을 부여하는 메서드
package chap05.section3.classpart;

public class Student {
    int studentId;
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
