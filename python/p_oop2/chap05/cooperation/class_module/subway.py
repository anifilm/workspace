class Subway:
    def __init__(self, line_number):
        self.line_number = line_number
        self.money = 0
        self.passenger_count = 0

    def take(self, money):
        self.money += money
        self.passenger_count += 1

    def show_subway_info(self):
        print(str(self.line_number) + "호선 지하철의 승객은 " + str(self.passenger_count) \
        + "명 이고, 수입은 " + str(self.money) + "원 입니다.")
