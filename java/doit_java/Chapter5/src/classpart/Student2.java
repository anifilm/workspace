// 학생 이름과 주소를 출력하는 메서드 만들기
package classpart;

public class Student2 {
    int studentId;
    String studentName;
    int grade;
    String address;

    public void showStudentInfo() {
        System.out.println(studentName + ", " + address);   // 이름, 주소 출력
    }
}
