// 상속에서 클래스 생성 과정 2
package inheritance;

// VIPCustomer 클래스는 Customer3 클래스를 상속 받음
public class VIPCustomer3 extends Customer3 {
    private int agentID;    // VIP 고객 담당 상담원 아이디
    double saleRatio;       // 할인율

    public VIPCustomer3() {
    //  super();    // 컴파일러가 자동으로 추가하는 코드, 상위 클래스의 Customer3()가 호출됨
        customerGrade = "VIP";  // 고객 등급 VIP
        bonusRatio = 0.05;      // 보너스 적립 5%
        saleRatio = 0.1;        // 할인율 10%
        System.out.println("VIPCustomer3() 생성자 호출");
    }

    // public int calcPrice(int price) {
    //     bonusPoint += price * bonusRatio;           // 보너스 포인트 계산
    //     return price - (int)(price * saleRatio);    // 할인된 가격을 계산하여 반환
    // }

    public int getAgentID() {
        return agentID;
    }
}
