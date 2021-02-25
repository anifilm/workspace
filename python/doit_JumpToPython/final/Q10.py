"""
Q10 사칙연산 계산기

다음과 같이 동작하는 클래스 Calculator를 작성하시오.

>>> cal1 = Calculator([1, 2, 3, 4, 5])
>>> cal1.sum()  # 합계
15
>>> cal1.avg()  # 평균
3.0
>>> cal2 = Calculator([6, 7, 8, 9, 10])
>>> cal2.sum()  # 합계
40
>>> cal2.avg()  # 평균
"""
class Calculator:
    def __init__(self, arr):
        self.arr = arr

    def sum(self):
        return sum(self.arr)

    def avg(self):
        return sum(self.arr) / len(self.arr)


cal1 = Calculator([1, 2, 3, 4, 5])
result = cal1.sum()  # 합계
print(result)        # 15
result = cal1.avg()  # 평균
print(result)        # 3.0

cal2 = Calculator([6, 7, 8, 9, 10])
result = cal2.sum()  # 합계
print(result)        # 40
result = cal2.avg()  # 평균
print(result)        # 8.0
