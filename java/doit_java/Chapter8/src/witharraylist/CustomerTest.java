package witharraylist;
import java.util.ArrayList;
import polymorphism.Customer;
import polymorphism.VIPCustomer;

public class CustomerTest {
    public static void main(String[] args) {

        ArrayList<Customer> customerList = new ArrayList<Customer>();

        Customer customerLim = new Customer(10010, "임채영");
        Customer customerJung = new Customer(10020, "정흥규");
        Customer customerSeo = new GoldCustomer(10030, "서환길");
        Customer customerAhn = new GoldCustomer(10040, "안재훈");
        Customer customerKim = new VIPCustomer(10050, "김태일", 1000);
        Customer customerMoon = new VIPCustomer(10060, "문영수", 2000);

        customerList.add(customerLim);
        customerList.add(customerJung);
        customerList.add(customerSeo);
        customerList.add(customerAhn);
        customerList.add(customerKim);
        customerList.add(customerMoon);

        System.out.println("====== 고객 정보 출력 ======");
        for (Customer customer : customerList) {
            System.out.println(customer.showCustomerInfo());
        }

        System.out.println("\n====== 할인율과 보너스 포인트 계산 ======");
        int price = 10000;
        for (Customer customer : customerList) {
            int cost = customer.calcPrice(price);
            System.out.println(customer.getCustomerName() + " 님이 " + cost + "원 지블 하셨습니다.");
            System.out.println(customer.getCustomerName() + " 님의 현재 보너스 포인트는 " + customer.bonusPoint + " 점 입니다.");
        }
    }
}
