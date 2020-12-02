// equals() 메서드 재정의하기
package chap11.section1.object;

class Student2 {
    int studentId;
    String studentName;

    public Student2(int studentId, String studentName) {
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
        if (obj instanceof Student2) {
            Student2 std = (Student2)obj;
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
}

public class EqualsTest2 {
    public static void main(String[] args) {

        Student2 studentLim = new Student2(1001, "임채영");
        Student2 studentLim2 = studentLim;   // 주소 복사
        Student2 studentChae = new Student2(1001, "임채영");

        if (studentLim == studentLim2)  // == 기호로 비교
            System.out.println("studentLim과 studentLim2의 주소는 같습니다.");
        else
            System.out.println("studentLim과 studentLim2의 주소는 다릅니다.");

        if (studentLim.equals(studentLim2)) // equals() 메서드로 비교
            System.out.println("studentLim과 studentLim2는 동일합니다.");
        else
            System.out.println("studentLim과 studentLim2는 동일하지 않습니다.");

        if (studentLim == studentChae)  // == 기호로 비교
            System.out.println("studentLim과 studentChae의 주소는 같습니다.");
        else
            System.out.println("studentLim과 studentChae의 주소는 다릅니다.");

        if (studentLim.equals(studentChae)) // equals() 메서드로 비교
            System.out.println("studentLim과 studentChae는 동일합니다.");
        else
            System.out.println("studentLim과 studentChae는 동일하지 않습니다.");

    }
}
