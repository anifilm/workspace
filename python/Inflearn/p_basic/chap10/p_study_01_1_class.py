# Class 구현하기 in Python
# - 축구 선수 정보를 Class로 구현하기

""" 알아두면 상식 [Naming]
 - 변수와 Class명에 대한 함수명 짓는 방식이 존재
 - snake_case: 단어 사이에 '_'(언더바)를 사용
            뱀 처럼 늘여쓰기, 파이썬 함수 및 변수명에 사용
 - CamelCase: 단어 사이를 대문자로 구분하여 작성
            낙타의 등 모양과 비슷, 파이썬 Class명에 사용
"""

class SoccerPlayer():

# Class 구현하기 in Python - Attribute
# Attribute 추가는 __init__, self와 함께
# __init__은 객체 초기화 예약 함수 (생성자, constructor)

    def __init__(self, name, position, back_number):
        self.name = name;
        self.position = position
        self.back_number = back_number

# Class 구현하기 in Python - Function
# Function(Action) 추가는 기존 함수와 같으나, 반드시 self를 추가해야만 Class 함수로 인정됨

    def change_back_number(self, new_number):
        print("선수의 등번호를 변경합니다: From %d to %d" % (self.back_number, new_number))
        self.back_number = new_number

    def __str__(self):  # __str__은 '자바의 toString()'과 같은 역할을 하는 예약 함수
        return "Hello, My name is %s, I play in %s in center." % (self.name, self.position)

""" 알아두면 상식 [파이썬에서 __의 의미]
 - __는 특수한 예약 함수나 변수에 사용됨
 예) __main__,  __add__, __srt__
"""

# Objects(Instance) 사용하기
# Object 이름 선언과 함께 초기값 입력하기

# jinhyun = SoccerPlayer("Jinhyun", "MF", 10)
#  객체명       클래스명    __init__ 함수 Interface, 초기값
#

def main():
    jinhyun = SoccerPlayer("Jinhyun", "MF", 10)
    print("현재 선수의 등번호는: ", jinhyun.back_number)

    jinhyun.change_back_number(5)
    print("현재 선수의 등번호는: ", jinhyun.back_number)

    print(jinhyun)


if __name__ == '__main__':
    main()
