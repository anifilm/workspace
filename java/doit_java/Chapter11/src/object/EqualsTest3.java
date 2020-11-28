// hashCode() 메서드 재정의하기
package object;

class Student3 {
    int studentId;
    String studentName;

    public Student3(int studentId, String studentName) {
        this.studentId = studentId;
        this.studentName = studentName;
    }

    @Override
    public String toString() {
        return studentId + ", " + studentName;
    }
    // equals() 메서드 재정의
    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Student3) {
            Student3 std = (Student3)obj;
            // 재정의한 equals() 메서드는 학생의 학번이 같으면 true 반환
            /*
            if (this.studentId == std.studentId)
                return true;
            else
                return false;
             */
            return (this.studentId == std.studentId);
        }
        return false;
    }
    // 해시 코드 값으로 학번을 반환하도록 재정의
    @Override
    public int hashCode() {
        return studentId;
    }
}

public class EqualsTest3 {
    public static void main(String[] args) {

        Student3 studentLim = new Student3(1001, "임채영");
        Student3 studentLim2 = studentLim;   // 주소 복사
        Student3 studentChae = new Student3(1001, "임채영");

        System.out.println("studentLim의 hashCode: " + studentLim.hashCode());
        System.out.println("studentChae의 hashCode: " + studentChae.hashCode());

        System.out.println("studentLim의 실제 주소값: " + System.identityHashCode(studentLim));
        System.out.println("studentChae의 실제 주소값: " + System.identityHashCode(studentChae));

    }
}
