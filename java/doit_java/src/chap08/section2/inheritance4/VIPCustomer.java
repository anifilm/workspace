// 명시적으로 상위 클래스 생성자 호출하기
package chap08.section2.inheritance4;

// VIPCustomer 클래스는 Customer 클래스를 상속 받음
public class VIPCustomer extends Customer {
    private int agentId;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율

    public VIPCustomer(int customerId, String customerName, int agentId) {
        super(customerId, customerName);    // 상위 클래스 생성자 호출
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        this.agentId = agentId;
        System.out.println("VIPCustomer(int, String, int) 생성자 호출");
    }

    public VIPCustomer() {
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        System.out.println("VIPCustomer() 생성자 호출");
    }

    public int getAgentId() {
        return agentId;
    }
}
