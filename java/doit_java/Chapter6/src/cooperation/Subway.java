// 지하철 클래스 구현하기
package cooperation;

public class Subway {
    String lineNumber;  // 지하철 노선
    int passengerCount; // 승객수
    int money;          // 버스 수입

    // 지하철 노선 번호를 매개변수로 받는 생성자
    public Subway(String lineNumber) {
        this.lineNumber = lineNumber;
    }
    // 승객이 지하철에 탄 경우를 구현한 메서드
    public void take(int money) {
        this.money += money;    // 지하철 수입 증가
        passengerCount++;       // 승객수 증가
    }
    // 지하철 정보를 출력하는 메서드
    public void showInfo() {
        System.out.println(lineNumber + "의 승객은 " + passengerCount + "명이고, 수입은 " + money + "원 입니다.");
    }
}