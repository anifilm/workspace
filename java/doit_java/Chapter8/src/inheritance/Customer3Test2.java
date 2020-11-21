// 하위 클래스 생성하기
package inheritance;

public class Customer3Test2 {
    public static void main(String[] args) {

        // Customer3 cusromerLim = new Customer3();
        // cusromerLim.setCustomerID(10010);
        // cusromerLim.setCustomerName("임채영");
        // cusromerLim.bonusPoint = 1000;
        // System.out.println(cusromerLim.showCustomerInfo());;

        VIPCustomer3 customerJung = new VIPCustomer3();
        customerJung.setCustomerID(10020);
        customerJung.setCustomerName("정흥규");
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());
    }
}
