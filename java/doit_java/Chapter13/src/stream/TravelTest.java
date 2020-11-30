// 스트림 활요하기 2
package stream;

import java.util.ArrayList;
import java.util.List;

public class TravelTest {
    public static void main(String[] args) {

        // 고객 생성
        TravelCustomer customerLim = new TravelCustomer("임채영", 43, 100);
        TravelCustomer customerJung = new TravelCustomer("정흥규", 20, 100);
        TravelCustomer customerSeo = new TravelCustomer("서환길", 13, 50);

        List<TravelCustomer> customerList = new ArrayList<>();
        // ArrayList에 고객 추가
        customerList.add(customerLim);
        customerList.add(customerJung);
        customerList.add(customerSeo);

        System.out.println("== 고객 명단 추가된 순서대로 출력 ==");
        customerList.stream().map(c -> c.getName()).forEach(s -> System.out.println(s));

        int total = customerList.stream().mapToInt(c -> c.getPrice()).sum();
        System.out.println("총 여행 비용은: " + total + "만원 입니다.");

        System.out.println("\n== 20세 이상 고객 명단 정렬하여 출력 ==");
        customerList.stream().filter(c -> c.getAge() >= 20)
            .map(c -> c.getName()).sorted().forEach(s -> System.out.println(s));
    }
}
