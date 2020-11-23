// 상속 클래스 테스트하기
package inheritance;

public class Customer2Test1 {
    public static void main(String[] args) {

        Customer2 customerLim = new Customer2();
        // customerID와 customerName은 protected 변수 이므로 set() 메서드 호출
        customerLim.setCustomerID(10010);
        customerLim.setCustomerName("임채영");
        customerLim.bonusPoint = 1000;
        System.out.println(customerLim.showCustomerInfo());;

        VIPCustomer2 customerJung = new VIPCustomer2();
        customerJung.setCustomerID(10020);
        customerJung.setCustomerName("정흥규");
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());
    }
}
