class Bus:
    def __init__(self, bus_number):
        self.bus_number = bus_number
        self.money = 0
        self.passenger_count = 0

    def take(self, money):
        self.money += money
        self.passenger_count += 1

    def show_bus_info(self):
        print(str(self.bus_number) + "번 버스의 승객 " + str(self.passenger_count) \
        + "명 이고, 수입은 " + str(self.money) + "원 입니다.")
