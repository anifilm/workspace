from customer import Customer
from vip_customer import VIPCustomer


def main():
    customer_lee = Customer(10010, "이순신")
    customer_lee.bonus_point = 1000

    customer_kim = VIPCustomer(10020, "김유신")
    customer_kim.bonus_point = 10000

    price_lee = customer_lee.calc_price(10000)
    price_kim = customer_kim.calc_price(10000)

    print(customer_lee.show_customer_info() + " 지불 금액은 " + str(price_lee) + "원 입니다.")
    print(customer_kim.show_customer_info() + " 지불 금액은 " + str(price_kim) + "원 입니다.")

    customer_no = VIPCustomer(10030, "나몰라")
    customer_no.bonus_point = 10000

    print(customer_no.show_customer_info() + " 지불 금액은 " + str(customer_no.calc_price(10000)) + "원 입니다.")
    print(customer_no.show_customer_info())


if __name__ == '__main__':
    main()
