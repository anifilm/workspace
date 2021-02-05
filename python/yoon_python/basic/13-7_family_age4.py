""" 13-7 self 이외의 매개변수를 갖는 함수들 정의해보기 """

class AgeInfo:
    def up_age(self):
        self.age += 1

    def get_age(self):
        return self.age

    def set_age(self, age):
        self.age = age  # self.age는 인스턴스 변수, age는 매개변수


def main():
    fa = AgeInfo()  # 아빠 나이 객체 생성
    fa.set_age(39)  # 아빠 나이 초기화, 매개변수 age에 39 전달

    fa.up_age()
    print("1년 후 아빠 나이:", fa.get_age())

main()
