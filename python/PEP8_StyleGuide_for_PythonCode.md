PEP 8 -- Style Guide for Python Code
참고 : https://www.python.org/dev/peps/pep-0008/

# 변수명 규칙

## 패키지와 모듈의 이름

모듈 이름은 짧아야 하고, 전부 소문자 여야 합니다. 가독성을 위해서라면 밑줄(＿)을 사용할 수도 있습니다.
패키지 이름 또는 짧아야 하고, 전부 소문자 여야 합니다. 밑줄은 권장하지 않습니다.

## 클래스 이름

클래스 이름은 일반적으로 CapWords 규칙을 사용해야 합니다.
exception은 클래스이므로, class와 동일하게 적용 / 맨 뒤는 "Error"로 끝나야 합니다.

## 함수의 이름

함수의 이름은 원칙적으로 소문야여야 하고, 가독성을 위해 밑줄(＿)로 단어를 나눌 수 있습니다.
간혹 threading.py 같이 이미 대/소문자를 혼용하는 경우는 대/소문자를 같이 쓰는 경우도 있습니다.

_클래스 내부에서 사용되는 함수의 경우 함수명 앞에 밑줄을 추가_

## 상수의 이름

상수 이름은 전부 대문자와 밑줄로 쓰는 것을 원칙으로 합니다.

## 변수의 이름

중복되지 않아야 하며 소문자를 원칙으로 합니다. 밑줄 사용에 주의 합니다.

## Type 변수의 이름

타입 변수의 이름은 짧은 CapWords 방식을 사용합니다.


''' Python
#클래스명은 CapWords

class NoteMsg:


# 상수명은 대문자와 밑줄로

INTEN_NO = 1


    def __init__(self):

        # 변수명은 소문자로, 가능한 밑줄이 없는
        self.note = ''

    # 함수명은 언더바가 있는 소문자로
    def save_msg(self, text):
        self.note += text + '\n'

    # 클래스 내부에서만 사용하는 함수명은 언더바가 앞에
    def _save_clear(self):
        self.note = ''


if __name__ == "__main__":

    # 타입변수는 짧은 CapWords 방식으로
    eMsg = NoteMsg()
    eMsg.save_msg('1')
    eMsg.save_msg('2')
    eMsg.save_msg('3')

    print(eMsg.note)

'''
