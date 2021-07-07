class Student:
    def __init__(self, id = 0, name = "이름 없음"):
        self.student_id = id
        self.student_name = name
        self.address = "주소 없음"

    def get_student_name(self):
        return self.student_name

    def show_student_info(self):
        print(str(self.student_id) + ", " + self.student_name + ", " + self.address)


def main():
    studentLee = Student(name = "이순신")
    studentLee.address = "서울";
    studentLee.show_student_info()

    studentKim = Student(100, "김유신")
    studentKim.show_student_info()


if __name__ == '__main__':
    main()


"""
파이썬 생성자 오버로딩을 지원하지 않기 때문에 생성자 __init__ 의 매개변수 선언에
기본값을 사용하여 지정해 줄수 있다.
기본값 선언시 매개변수의 호출 순서의 문제를 피하기 위해 생성자 호출시 name = "이름"
과 같이 선언하여야 순서에 대한 문제를 피할 수 있다.

def show_student_info(self): 메서드 호출시 출력 때문에 기본값을 None 으로 할 수
없으며 멤버변수의 초기화시 반드시 값을 가지고 있어야 한다.

"""
