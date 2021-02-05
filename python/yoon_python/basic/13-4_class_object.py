""" 13-4 클래스와 객체의 이해 """

class AgeInfo:  # 클래스 AgeInfo의 정의
    def up_age(self):
        self.age += 1

    def get_age(self):
        return self.age


def main():
    fa = AgeInfo()  # AgeInfo의 객체를 생성하고 이를 변수 fa에 저장
    fa.age = 39     # fa에 저장된 객체의 변수 age에 39를 저장

    print("현재 아빠 나이...")
    print("아빠:", fa.get_age())

    print("1년 뒤...")
    fa.up_age()
    print("아빠:", fa.get_age())

main()
