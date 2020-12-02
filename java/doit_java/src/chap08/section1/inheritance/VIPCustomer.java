// VIPCustomer 클래스 구현하기 (상속 사용하지 않음)
package chap08.section1.inheritance;

public class VIPCustomer {
    // Customer 클래스와 겹치는 멤버 변수
    private int customerId;         // 고객 아이디
    private String customerName;    // 고객 이름
    private String customerGrade;   // 고객 등급
    int bonusPoint;                 // 보너스 포인트
    double bonusRatio;              // 적립 비율

    // VIP 고객 관련 기능을 구현할 때만 필요한 멤버 변수
    private int agentId;            // VIP 고객 담당 상담원 아이디
    double saleRatio;               // 할인율
    // 디폴트 생성자
    public VIPCustomer() {
        customerGrade = "VIP";      // 고객 등급 VIP
        bonusRatio = 0.05;          // 보너스 적립 5%
        saleRatio = 0.1;            // 할인율 10%
    }
    // 보너스 포인트 적립, 지불 가격 계산 메서드
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;   // 보너스 포인트 계산
        return price - (int)(price * saleRatio);    // 할인율 적용
    }
    // VIP 고객에게만 필요한 메서드
    public int getAgentId() {
        return agentId;
    }
    // 고객 정보를 반환하는 메서드
    public String showCustomerInfo() {
        return customerName + " 님의 등급은 " + customerGrade + " 이며, 보너스 포인트는 " + bonusPoint + " 입니다.";
    }
}
