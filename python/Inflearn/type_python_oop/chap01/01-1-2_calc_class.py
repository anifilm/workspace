class Cal:
    # 생성자: 메모리에 올라오는 순간 즉시 실행됩니다.
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        return self.a + self.b

    def sub(self):
        return self.a - self.b

    def mul(self):
        return self.a * self.b

    def div(self):
        return self.a / self.b


cal1 = Cal(1, 2)

print(cal1.add())
print(cal1.sub())
print(cal1.mul())
print(cal1.div())
print()

cal2 = Cal(3, 4)

print(cal2.add())
print(cal2.sub())
print(cal2.mul())
print(cal2.div())
print()

cal1.a = 7

print(cal1.add())
print(cal1.sub())
print(cal1.mul())
print(cal1.div())
