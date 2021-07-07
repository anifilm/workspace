from customer import Customer
from vip_customer import VIPCustomer


def main():
    customer_lee = Customer(10010, "이순신")
#   customer_lee.set_customer_name("이순신")
#   customer_lee.set_customer_id(10010)
    customer_lee.bonus_point = 1000
    print(customer_lee.show_customer_info())

    customer_kim = VIPCustomer(10020, "김유신")
#   customer_kim.set_customer_name("김유신")
#   customer_kim.set_customer_id(10020)
    customer_kim.bonus_point = 10000
    print(customer_kim.show_customer_info())


if __name__ == '__main__':
    main()
