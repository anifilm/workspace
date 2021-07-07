from customer import Customer


class VIPCustomer(Customer):
    def __init__(self, customer_id=0, customer_name=None):
        super().__init__(customer_id, customer_name)
        self.customer_grade = "VIP"
        self.bonus_ratio = 0.05
        self.sales_ratio = 0.1
        self.agentID = 0
    #   print("VIPCustomer() 생성자 호출")

    def calc_price(self, price):
        self.bonus_point += int(price * self.bonus_ratio)
        return price - int(price * self.sales_ratio)
