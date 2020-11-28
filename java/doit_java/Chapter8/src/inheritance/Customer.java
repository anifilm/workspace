// Customer 클래스 구현하기
package inheritance;

public class Customer {
    // 멤버 변수
    private int customerId;         // 고객 아이디
    private String customerName;    // 고객 이름
    private String customerGrade;   // 고객 등급
    int bonusPoint;                 // 보너스 포인트
    double bonusRatio;              // 적립 비율

    // 디폴트 생성자
    public Customer() {
        customerGrade = "SILVER";   // 기본 등급
        bonusRatio = 0.01;          // 보너스 포인트 기본 적립 비율
    }
    // 보너스 포인트 적립, 지불 가격 계산 메서드
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;   // 보너스 포인트 계산
        return price;
    }
    // 고객 정보를 반환하는 메서드
    public String showCustomerInfo() {
        return customerName + " 님의 등급은 " + customerGrade + " 이며, 보너스 포인트는 " + bonusPoint + " 입니다.";
    }
}
