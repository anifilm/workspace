package polymorphism;

public class CustomerTest {
    public static void main(String[] args) {

        Customer customerLim = new Customer();
        customerLim.setCustomerID(10010);
        customerLim.setCustomerName("임채영");
        customerLim.bonusPoint = 1000;
        System.out.println(customerLim.showCustomerInfo());

        Customer customerJung = new VIPCustomer(10020, "정흥규", 1000);
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());

        System.out.println("\n====== 할인율과 보너스 포인트 계산 ======");

        int price = 10000;
        int limPrice = customerLim.calcPrice(price);
        int jungPrice = customerJung.calcPrice(price);

        System.out.println(customerLim.getCustomerName() + " 님이 " + limPrice + "원 지불 하셨습니다.");
        System.out.println(customerLim.showCustomerInfo());

        System.out.println(customerJung.getCustomerName() + " 님이 " + jungPrice + "원 지불 하셨습니다.");
        System.out.println(customerJung.showCustomerInfo());
    }
}
