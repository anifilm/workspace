/*
쇼핑몰에 주문이 들어왔습니다. 주문 내용은 다음과 같습니다.

주문 번호: 201803120001
주문자 아이디: abc123
주문 날짜: 2018년 3월 12일
주문자 이름: 홍길순
주문 상품번호: PD0345-12
배송 주소: 서울시 영등포구 여의도동 20번지

위 주문 내용에 대한 클래스를 만들과 주문 내요을 인스턴스로 생성한 후
위와 같은 형식으로 주문 내용을 그대로 출력해 보세요.
*/

package alone;

public class OrderTest {

    public static void main(String args[]) {

        Order order = new Order();
        order.orderID = 201803120001L;
        order.customerID = "abc123";
        order.orderDate = "2018년 3월 12일";
        order.customerName = "홍길순";
        order.productID = "PD0345-12";
        order.shippingAddress = "서울시 영등포구 여의도동 20번지";

        System.out.println("주문 번호: " + order.orderID);
        System.out.println("주문자 아이디: " + order.customerID);
        System.out.println("주문 날짜: " + order.orderDate);
        System.out.println("주문자 이름: " + order.customerName);
        System.out.println("주문 상품번호: " + order.productID);
        System.out.println("배송 주소: " + order.shippingAddress);
    }
}