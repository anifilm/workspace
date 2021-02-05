""" 13-6 self 너 뭐냐! """

class AgeInfo:
    def up_age(self):
        self.age += 1

    def get_age(self):
        return self.age


def main():
    fa = AgeInfo()
    fa.age = 39  # 인스턴스 변수 age의 값 39로 초기화

    fa.up_age()  # fa에 저장된 객체의 up_age 함수 호출
    AgeInfo.up_age(fa)   # 위와 동일한 기능의 문장

    print(fa.get_age())  # fa에 저장된 객체의 get_age 함수 호출
    print(AgeInfo.get_age(fa))  # 위와 동일한 기능의 문장

main()
