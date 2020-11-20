// 클래스 메서드와 인스턴스 변수
package staticex;

public class Student3 {

    private static int serialNum = 1000;    // private 변수로 변경

    public int studentID;
    public String studentName;
    public int grade;
    public String address;

    public Student3() {
        serialNum++;
        studentID = serialNum;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String name) {
        studentName = name;
    }

    public static int getSerialNum() {  // serialNum의 get() 메서드 (클래스 메서드임)
    //  int i = 10;                     // 지역 변수는 가능하지만
    //  studentName = "임채영";          // 인스턴스 변수를 포함할 수 없다. (오류발생)
        return serialNum;
    }

    public static void setSerialNum(int serialNum) {    // serialNum의 set() 메서드
        Student3.serialNum = serialNum;
    }
}