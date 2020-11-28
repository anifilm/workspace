// 하위 클래스 생성하기
package inheritance;

public class Customer4Test3 {
    public static void main(String[] args) {

        // Customer3 cusromerLim = new Customer3();
        // cusromerLim.setCustomerId(10010);
        // cusromerLim.setCustomerName("임채영");
        // cusromerLim.bonusPoint = 1000;
        // System.out.println(cusromerLim.showCustomerInfo());;

        // VIPCustomer3 customerJung = new VIPCustomer3();
        // customerJung.setCustomerId(10020);
        // customerJung.setCustomerName("정흥규");
        // customerJung.bonusPoint = 1000;
        // System.out.println(customerJung.showCustomerInfo());

        VIPCustomer4 customerJung = new VIPCustomer4(10020, "정흥규", 1000);
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());
    }
}
