// 고객 관리 프로그램 완성하기 2
package witharraylist;

// inheritance VIPCustomer5에서 복사해옴
// VIPCustomer 클래스는 Customer 클래스를 상속 받음
public class VIPCustomer extends Customer {
    private int agentId;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율

    public VIPCustomer(int customerId, String customerName, int agentId) {
        super(customerId, customerName);
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        this.agentId = agentId;
    }

    /* VIP 디폴트 생성자
    public VIPCustomer() {
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
    }*/
    // 재정의한 메서드
    @Override
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;           // 보너스 포인트 계산
        return price - (int)(price * saleRatio);    // 할인된 가격을 계산하여 반환
    }
    // 고객 정보를 반환하는 메서드
    public String showCustomerInfo() {
        return super.showCustomerInfo() + " 담당 상담원 번호는 " + agentId + " 입니다.";
    }

    public int getAgentId() {
        return agentId;
    }
}
