// Student 클래스에 main() 함수 추가하기
package classpart;

public class Student5 {
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

    // 메인 함수
    public static void main(String[] args) {
        Student studentLim = new Student();  // Student 클래스 생성
        studentLim.studentName = "임채영";

        System.out.println(studentLim.studentName);
        System.out.println(studentLim.getStudentName());
    }
}