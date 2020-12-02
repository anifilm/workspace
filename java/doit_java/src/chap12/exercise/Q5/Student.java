/*
Q5
StudentTest의 출력 결과가 다음처럼 나오도록 Student 클래스를 구현해 보세요.
 */
package chap12.exercise.Q5;

public class Student {
    private String studentId;       // 학생 아이디
    private String studentName;  // 학생 이름

    public Student(String studentId, String studentName) {
        this.studentId = studentId;
        this.studentName = studentName;
    }

    public String getStudentId() {
        return studentId;
    }

    public void setStudentId(String studentId) {
        this.studentId = studentId;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }
    // toString() 메서드 재정의
    @Override
    public String toString() {
        return studentId + ": " + studentName;
    }

    @Override
    public int hashCode() {
        return Integer.parseInt(studentId);
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Student) {
            Student std = (Student)obj;
            if(this.studentId == std.studentId)
                return true;
            else
                return false;
        }
        return false;
    }
}
