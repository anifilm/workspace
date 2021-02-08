class Student:
    def __init__(self, student_name, money):
        self.student_name = student_name
        self.money = money

    def take_bus(self, bus):
        bus.take(1000)
        self.money -= 1000

    def take_subway(self, subway):
        subway.take(1200)
        self.money -= 1200

    def take_taxi(self, taxi):
        taxi.take(10000)
        self.money -= 10000

    def show_info(self):
        print(self.student_name + "님의 남은 돈은 " + str(self.money) + "원 입니다.")
