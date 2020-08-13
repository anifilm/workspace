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

public class Order {

    long orderID;
    String customerID;
    String orderDate;
    String customerName;
    String productID;
    String shippingAddress;
}