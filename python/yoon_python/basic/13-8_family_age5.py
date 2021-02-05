""" 13-8 생성자 """

class AgeInfo:
    def __init__(self, age):  # AgeInfo의 생성자
        self.age = age  # 매개변수 age에 전달된 값으로 인스턴스 변수 age 초기화

    def up_age(self):
        self.age += 1

    def get_age(self):
        return self.age


def main():
    fa = AgeInfo(39)  # 객체 생성 그리고 초기화

    fa.up_age()
    print("1년 후 아빠 나이:", fa.get_age())

main()
