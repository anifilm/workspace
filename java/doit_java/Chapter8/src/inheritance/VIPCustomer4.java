// 명시적으로 상위 클래스 생성자 호출하기
package inheritance;

// VIPCustomer 클래스는 Customer4 클래스를 상속 받음
public class VIPCustomer4 extends Customer4 {
    private int agentID;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율

    public VIPCustomer4(int customerID, String customerName, int agentID) {
        super(customerID, customerName);    // 상위 클래스 생성자 호출
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        this.agentID = agentID;
        System.out.println("VIPCustomer4(int, String, int) 생성자 호출");
    }

    public VIPCustomer4() {
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        System.out.println("VIPCustomer4() 생성자 호출");
    }

    // public int calcPrice(int price) {
    //     bonusPoint += price * bonusRatio;           // 보너스 포인트 계산
    //     return price - (int)(price * saleRatio);    // 할인된 가격을 계산하여 반환
    // }

    public int getAgentID() {
        return agentID;
    }
}
