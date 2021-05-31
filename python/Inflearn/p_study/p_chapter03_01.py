# Chapther03-01
# Special Method(Magic Method)
# 파이썬의 핵심 -> 시퀀스(Sequence), 반복(Iterator), 함수(Function), 클래스(Class)
# 클래스 안에 정의할 수 있는 특별한(Built-in) 메서드

# 기본형
print(int)
print(float)

# 모든 속성 및 메서드 출력
print(dir(int))
print(dir(float))

n = 10

#print(n.__doc__)
print(n + 100, n.__add__(100))
print(n * 100, n.__mul__(100))
print(bool(n), n.__bool__())
print()

# 클래스 예제 1
class Fruit:
    def __init__(self, name, price):
        self._name = name
        self._price = price

    def __str__(self):
        return 'Fruit Class Info: {}, {}'.format(self._name, self._price)

    def __add__(self, x):
        print('Called >> __add__')
        return self._price + x._price

    def __sub__(self, x):
        print('Called >> __sub__')
        return self._price - x._price

    def __le__(self, x):
        print('Called >> __le__')
        if self._price <= x._price:
            return True
        else:
            return False

    def __ge__(self, x):
        print('Called >> __ge__')
        if self._price >= x._price:
            return True
        else:
            return False


# 인스턴스 생성
s1 = Fruit('Orange', 7500)
s2 = Fruit('Banana', 3000)

# 일반적인 계산
#print(s1._price + s2._price)

# 매직 메서드
print(s1)
print(s2)
print(s1 + s2)
print(s1 - s2)
print(s1 >= s2)
print(s1 <= s2)
