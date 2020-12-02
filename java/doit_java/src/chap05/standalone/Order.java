/*
나혼자 코딩!
2. 쇼핑몰에 주문이 들어왔습니다. 주문 내용은 다음과 같습니다.

 주문 번호: 202011200001
 주문자 아이디: anifilm
 주문 날짜: 2020년 11월 20일
 주문자 이름: 임채영
 주문 상품 번호: PD0345-12
 배송 주소: 서울시 중랑구 동일로 157길 20-7

위 주문 내용에 대한 클래스를 만들고 주문 내용을 인스턴스로 생성한 후 위와 같은 형식으로
주문 내용을 그대로 출력해 보세요.
 */
package chap05.standalone;

public class Order {
    long orderId;
    String customerId;
    String orderDate;
    String customerName;
    String productId;
    String shippingAddress;
}
