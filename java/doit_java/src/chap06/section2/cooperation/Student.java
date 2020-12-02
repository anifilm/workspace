// 학생 클래스 구현하기
package chap06.section2.cooperation;

public class Student {
    public String studentName;  // 학생 이름
    public int grade;           // 학년
    public int money;           // 학생이 가지고 있는 돈

    // 학생 이름과 가진 돈을 매개변수로 받는 생성자
    public Student(String studentName, int money) {
        this.studentName = studentName;
        this.money = money;
    }
    // 학생이 버스를 타면 1,000원을 지불하는 기능을 구현한 메서드
    public void takeBus(Bus bus) {
        bus.take(1000);
        this.money -= 1000;
    }
    // 학생이 지하철을 타면 1,500원을 지불하는 기능을 구현한 메서드
    public void takeSubway(Subway subway) {
        subway.take(1500);
        this.money -= 1500;
    }
    // 학생이 택시를 타면 10,000원을 지불하는 기능을 구현한 메서드
    public void takeTaxi(Taxi taxi) {
        taxi.take(10000);
        this.money -= 10000;
    }
    // 학생의 현재 정보를 출력하는 메서드
    public void showInfo() {
        System.out.println(studentName + "의 남은 돈은 " + money + "원 입니다.");
    }
}
