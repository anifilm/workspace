package staticex;

public class Student4 {

    private static int serialNum = 1000;     // (private 변수로 변경) static 변수는 인스턴스 생성과 상관 없이 먼저 생성됨

    public int studentID;
    public String studentName;
    public int grade;
    public String address;

    public Student4() {
        serialNum++;                        // 학생이 생성될 때마다 증가
        studentID = serialNum;              // 증가된 값을 학번 인스턴스 변수에 부여
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String name) {
        studentName = name;
    }

    public static int getSerialNum() {                  // serialNum의 get() 메서드
        //int i = 10;                   // 지역 변수는 가능하지만
        //studentName = "임채영";       // 인스턴스 변수를 포함할 수 없다 (오류발생)
        return serialNum;
    }

    public static void setSerialNum(int serialNum) {    // serialNum의 set() 메서드
        Student4.serialNum = serialNum;
    }
}