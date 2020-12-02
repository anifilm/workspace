// VIPCustomer 클래스 구현하기
package chap08.section1.inheritance2;

// VIPCustomer 클래스는 Customer 클래스를 상속 받음
public class VIPCustomer extends Customer {
    // VIP 고객 관련 기능을 구현할 때만 필요한 멤버 변수
    private int agentId;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율

    // 디폴트 생성자
    public VIPCustomer() {
        customerGrade = "VIP";  // 고객 등급 VIP (상위 클래스에서 private 변수이므로 오류 발생)
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
    }
    // VIP 고객에게만 필요한 메서드
    public int getAgentId() {
        return agentId;
    }
}
