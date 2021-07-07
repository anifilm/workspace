class Customer:
    def __init__(self):
        self.customer_id = 0;
        self.customer_name = "";
        self.customer_grade = "SILVER"
        self.bonus_point = 0
        self.bonus_ratio = 0.01

    def calc_price(self, price):
        self.bonus_point += price * self.bonus_point
        return price

    def show_customer_info(self):
        return self.customer_name + "님의 등급은 " + self.customer_grade + "이며, 적립된 보너스 포인트는 " + str(self.bonus_point) + "점 입니다."

    def get_customer_id(self):
        return customer_id

    def set_customer_id(self, customer_id):
        self.customer_id = customer_id

    def get_customer_name(self):
        return customer_name

    def set_customer_name(self, customer_name):
        self.customer_name = customer_name

    def get_customer_grade(self):
        return customer_grade

    def set_customer_grade(self, customer_grade):
        this.customer_grade = customer_grade
