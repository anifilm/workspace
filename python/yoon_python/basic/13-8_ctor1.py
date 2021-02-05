""" 13-8 생성자 """

class Const:
    def __init__(self, n1, n2):  # 생성자라 불리는 메서드, 메서드 이름이 __init__ 이다.
        self.n1 = n1  # self.n1은 인스턴스 변수, n1은 매개변수
        self.n2 = n2  # self.n2은 인스턴스 변수, n2은 매개변수

    def show_data(self):
        print(self.n1, self.n2)


def main():
    o1 = Const(1, 2)  # 생성자에 1과 2를 전달
    o2 = Const(3, 4)  # 생성자에 3과 4를 전달

    o1.show_data()
    o2.show_data()

main()
