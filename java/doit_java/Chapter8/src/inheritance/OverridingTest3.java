// 클래스형에 기반하여 지불 금액 계산하기
package inheritance;

public class OverridingTest3 {
    public static void main(String[] args) {

        int price = 10000;

        // Customer 인스턴스 생성
        Customer5 customerLim = new Customer5(10010, "임채영");
        customerLim.bonusPoint = 1000;
        System.out.println(customerLim.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerLim.calcPrice(price) + "원 입니다.");

        // VIPCustomer 인스턴스 생성
        VIPCustomer5 customerJung = new VIPCustomer5(10020, "정흥규", 1000);
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerJung.calcPrice(price) + "원 입니다.");

        // VIPCustomer 인스턴스를 Customer형으로 변환
        Customer5 vc = new VIPCustomer5(10030, "서환길", 2000);    // VIP 고객 생성
        vc.bonusPoint = 1000;
        System.out.println(vc.getCustomerName() + " 님이 지불해야 하는 금액은 " + vc.calcPrice(price) + "원 입니다.");
    }
}
