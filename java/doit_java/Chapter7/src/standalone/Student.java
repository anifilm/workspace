/*
나 혼자 코딩!
객체 배열 만들어 활용하기
학생 클래스 Student를 만들고 멤버 변수로 studentID, name을 선언합니다. showStudentInfo()
메서드를 만들어 studentID와 name 값을 출력합니다. 그리고 StudentArray 클래스에서
Student 3명의 배열을 만들고 Student를 생성하여 저장한 후 for문을 사용하여 Student 정보를
출력합니다. 출력 결과가 다음과 같도록 Studnet와 StudentArray 클래스를 만들어 보세요.
 */
package standalone;

public class Student {
    private int studentID;
    private String studentName;

    public Student() {}

    public Student(int studentID, String studentName) {
        this.studentID = studentID;
        this.studentName = studentName;
    }

    public int getStudentID() {
        return studentID;
    }

    public void setStudentID(int studentID) {
        this.studentID = studentID;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public void showStudentInfo() {
        System.out.println(studentID + ", " + studentName);
    }
}
