// 하위 클래스 생성하기
package chap08.section2.inheritance3;

public class CustomerTest2 {
    public static void main(String[] args) {

        // Customer cusromerLim = new Customer();
        // cusromerLim.setCustomerId(10010);
        // cusromerLim.setCustomerName("임채영");
        // cusromerLim.bonusPoint = 1000;
        // System.out.println(cusromerLim.showCustomerInfo());;

        VIPCustomer customerJung = new VIPCustomer();   // 하위 클래스 생성
        customerJung.setCustomerId(10020);
        customerJung.setCustomerName("정흥규");
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());
    }
}
