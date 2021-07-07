class Taxi:
    def __init__(self, company_name):
        self.company_name = company_name
        self.money = 0

    def take(self, money):
        self.money += money

    def show_taxi_info(self):
        print(self.company_name + " 택시 수입은 " + str(self.money) + "원 입니다.")
