// Object 클래스의 equals() 메서드 사용하기
package chap11.section1.object;

class Student {
    int studentId;
    String studentName;

    public Student(int studentId, String studentName) {
        this.studentId = studentId;
        this.studentName = studentName;
    }

    @Override
    public String toString() {
        return studentId + ", " + studentName;
    }
}

public class EqualsTest {
    public static void main(String[] args) {

        Student studentLim = new Student(1001, "임채영");
        Student studentLim2 = studentLim;   // 주소 복사
        Student studentChae = new Student(1001, "임채영");

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
