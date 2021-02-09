from menu import Menu

class StarCoffee:
    def __init__(self):
        self.money = 0

    def brewing(self, money):
        self.money += money
        if self.money == Menu.STARAMERICANO:
            return "별 다방 아메리카노를 구입했습니다."
        elif self.money == Menu.STARLATTE:
            return "별 다방 라떼를 구입했습니다."
        else:
            return None
