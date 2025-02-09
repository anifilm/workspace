// chap16.school.Student 클래스에 main() 함수 추가하기
package chap05.section4.classpart;

public class Student {
    int studentId;      // 학번
    String studentName; // 학생 이름
    int grade;          // 학년
    String address;     // 사는 곳

    // 학생의 이름을 반환하는 메서드
    public String getStudentName() {
        return studentName;
    }
    // 학생의 이름을 부여하는 메서드
    public void setStudentName(String name) {
        studentName = name;
    }

    // main() 함수
    public static void main(String[] args) {
        Student studentLim = new Student();  // chap16.school.Student 클래스 생성
        studentLim.studentName = "임채영";

        System.out.println(studentLim.studentName);
        System.out.println(studentLim.getStudentName());
    }
}
