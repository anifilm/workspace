class Order:
    # 생성자를 통한 멤버변수 선언 및 초기화
    def __init__(self):
        self.order_id = None
        self.customer_id = None
        self.order_date = None
        self.customer_name = None
        self.product_id = None
        self.shipping_address = None


def main():
    order = Order()

    order.order_id = 201803120001
    order.customer_id = "abc123";
    order.order_date = "2018년 3월 12일";
    order.customer_name = "홍길순";
    order.product_id = "PD345-12";
    order.shipping_address = "서울시 영등포구 여의도동 20번지";

    print("주문 번호:", order.order_id)
    print("주문자 아이디:", order.customer_id)
    print("주문 날짜:", order.order_date)
    print("주문자 이름:", order.customer_name)
    print("주문 상품 번호:", order.product_id)
    print("배송 주소:", order.shipping_address)


if __name__ == '__main__':
    main()