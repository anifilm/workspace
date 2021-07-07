class Person:
    def __init__(self, name, money):
        self.name = name
        self.money = money

    def buy_star_coffee(self, s_coffee, money):
        message = s_coffee.brewing(money)
        if message != None:
            self.money -= money
            print(self.name + "님이 " + str(money) + "으로 " + message)

    def buy_bean_coffee(self, b_coffee, money):
        message = b_coffee.brewing(money)
        if message != None:
            self.money -= money
            print(self.name + "님이 " + str(money) + "으로 " + message)
