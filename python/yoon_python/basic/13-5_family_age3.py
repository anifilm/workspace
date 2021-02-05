""" 13-5 나이 정보 관리하는 이전 예제의 수정 결과 """

class AgeInfo:  # 클래스 AgeInfo의 정의
    def up_age(self):
        self.age += 1

    def get_age(self):
        return self.age


def main():
    fa = AgeInfo()  # 아빠 나이 객체 생성
    mo = AgeInfo()  # 엄마 나이 객체 생성
    me = AgeInfo()  # 나의 나이 객체 생성

    fa.age = 39     # 아빠 현재 나이
    mo.age = 35     # 엄마 현재 나이
    me.age = 12     # 나의 현재 나이

    print("현재 가족 나이...")
    print("아빠:", fa.get_age())
    print("엄마:", mo.get_age())
    print(" 나 :", me.get_age())

    sum = fa.get_age() + mo.get_age() + me.get_age()
    print("가족 나이 합:", sum)

    print("\n1년 뒤... 가족 나이")
    fa.up_age()  # 아빠 나이 한살 올림
    mo.up_age()  # 엄마 나이 한살 올림
    me.up_age()  # 나의 나이 한살 올림

    print("아빠:", fa.get_age())
    print("엄마:", mo.get_age())
    print(" 나 :", me.get_age())

    sum = fa.get_age() + mo.get_age() + me.get_age()
    print("가족 나이 합:", sum)

main()
