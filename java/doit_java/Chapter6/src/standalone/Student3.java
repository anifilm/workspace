/*
나 혼자 코딩!
static 변수와 static 메서드 연습하기
학생마다 각각 다른 학생 카드가 발급됩니다. 학생 카드 번호는 학번에 100을 더한 값입니다.
Student3 클래스를 만들어 학생 카드 번호 멤버 변수를 추가하고, 학생이 생성될 때마다 학생
카드 번호를 부여합니다. StudentTest6 클래스를 만들어 학생 두 명을 생성합니다. 두 학생의
카드 번호를 출력해 보세요.
 */
package standalone;

public class Student3 {
    private static int serialNum = 1000;
    public int studentID;
    public String studentName;
    public int grade;
    public String address;
    private static int cardNum;

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
    // serialNum의 get() 메서드
    public static int getSerialNum() {
        return serialNum;
    }
    // serialNum의 set() 메서드
    public static void setSerialNum(int serialNum) {
        Student3.serialNum = serialNum;
    }
    // cardNum의 get() 메서드
    public static int getCardNum() {
        return cardNum;
    }
    // cardNum의 set() 메서드
    public static void setCardNum() {
        Student3.cardNum = serialNum + 100;
    }
}