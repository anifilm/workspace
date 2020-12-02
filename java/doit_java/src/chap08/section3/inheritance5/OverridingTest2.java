// 클래스 형 변환과 재정의 메서드 호출하기
package chap08.section3.inheritance5;

public class OverridingTest2 {
    public static void main(String[] args) {

        // Customer customerLim = new Customer(10010, "임채영");
        // customerLim.bonusPoint = 1000;
        //
        // VIPCustomer customerJung = new VIPCustomer(10020, "정흥규", 1000);
        // customerJung.bonusPoint = 1000;
        //
        // int price = 10000;
        // System.out.println(customerLim.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerLim.calcPrice(price) + "원 입니다.");
        // System.out.println(customerJung.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerJung.calcPrice(price) + "원 입니다.");

        Customer vc = new VIPCustomer(10030, "서환길", 2000);    // VIP 고객 생성
        vc.bonusPoint = 1000;

        System.out.println(vc.getCustomerName() + " 님이 지불해야 하는 금액은 " + vc.calcPrice(10000) + "원 입니다.");
    }
}
