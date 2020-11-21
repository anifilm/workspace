// VIPCustomer 클래스 구현하기 (상속 사용)
package inheritance;

// VIPCustomer 클래스는 Customer2 클래스를 상속 받음
public class VIPCustomer2 extends Customer2 {
    // Customer 클래스와 겹치는 멤버 변수
    // private int customerID;
    // private String customerName;
    // private String customerGrade;
    // int bonusPoint;
    // double bonusRatio;

    // VIP 고객 관련 기능을 구현할 때만 필요한 멤버 변수
    private int agentID;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율
    // 디폴트 생성자
    public VIPCustomer2() {
        customerGrade = "VIP";  // 고객 등급 VIP (상위 클래스에서 private 변수이므로 오류 발생)
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
    }
    // 보너스 포인트 적립, 지불 가격 계산 메서드
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;   // 보너스 포인트 계산
        return price - (int)(price * saleRatio);    // 할인율 적용
    }
    // VIP 고객에게만 필요한 메서드
    public int getAgentID() {
        return agentID;
    }
    // 고객 정보를 반환하는 메서드
    // public String showCustomerInfo() {
    //     return customerName + " 님의 등급은 " + customerGrade + " 이며, 보너스 포인트는 " + bonusPoint + " 입니다.";
    // }
}
