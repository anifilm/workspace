// calcPrice() 테스트하기
package chap08.section3.inheritance5;

public class OverridingTest1 {
    public static void main(String[] args) {

        Customer customerLim = new Customer(10010, "임채영");
        customerLim.bonusPoint = 1000;

        VIPCustomer customerJung = new VIPCustomer(10020, "정흥규", 1000);
        customerJung.bonusPoint = 1000;

        int price = 10000;
        System.out.println(customerLim.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerLim.calcPrice(price) + "원 입니다.");
        System.out.println(customerJung.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerJung.calcPrice(price) + "원 입니다.");
    }
}
