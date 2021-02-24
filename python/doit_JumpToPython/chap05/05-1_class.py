""" 05-1 클래스 """

class FourCal:
    def __init__(self, first, second):
        self.first = first
        self.second = second

    def setdata(self, first, second):
        self.first = first
        self.second = second

    def add(self):
        return self.first + self.second

    def sub(self):
        return self.first - self.second

    def mul(self):
        return self.first * self.second

    def div(self):
        return self.first / self.second


class MoreFourCal(FourCal):
    def pow(self):
        return self.first ** self.second


class SafeFourCal(FourCal):
    def div(self):
        if self.second == 0:
            return 0
        else:
            return self.first / self.second


# a = FourCal()
# b = FourCal()
a = FourCal(4, 2)
b = FourCal(3, 7)

# a.setdata(4, 2)
print(a.first, a.second)
print("a.add():", a.add())

# b.setdata(3, 7)
print(b.first, b.second)

print(id(a), id(b))

c = MoreFourCal(6, 3)
print("c.add():", c.add())
print("c.pow():", c.pow())

d = SafeFourCal(4, 0)
print("d.div():", d.div())
