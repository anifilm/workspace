// 학번 자동으로 부여하기
package chap06.section3.staticex2;

public class Student {
    public static int serialNum = 1000;
    public int studentId;
    public String studentName;
    public int grade;
    public String address;

    public Student() {         // 생성자
        serialNum++;            // 학생이 생성될 때마다 증가
        studentId = serialNum;  // 증가된 값을 학번 인스턴스 변수에 부여
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String name) {
        studentName = name;
    }
}
