// serialNum의 get(), set() 메서드 사용하기
package staticex;

public class Student2 {
    private static int serialNum = 1000;     // private 변수로 변경
    public int studentId;
    public String studentName;
    public int grade;
    public String address;

    public Student2() {
        serialNum++;
        studentId = serialNum;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String name) {
        studentName = name;
    }
    // serialNum의 get() 메서드
    public static int getSerialNum() {
        int i = 10;
        return serialNum;
    }
    // serialNum의 set() 메서드
    public static void setSerialNum(int serialNum) {
        Student2.serialNum = serialNum;
    }
}
