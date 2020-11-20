// 택시 클래스 구현하기 (나 혼자 코딩!)
package cooperation;

public class Taxi {
    int taxiNumber;     // 택시 번호
    int passengerCount; // 승객수
    int money;          // 택시 수입

    // 택시 번호를 매개변수로 받는 생성자
    public Taxi(int taxiNumber) {
        this.taxiNumber = taxiNumber;
    }
    // 승객이 택시에 탄 경우를 구현한 매서드
    public void take(int money) {
        this.money += money;    // 택시 수입 증가
        passengerCount++;       // 승객수 증가
    }
    // 택시 정보를 출력하는 메서드
    public void showInfo() {
        System.out.println("택시 " + taxiNumber + "번의 승객은 " + passengerCount + "명이고, 수입은 " + money + "원 입니다.");
    }
}