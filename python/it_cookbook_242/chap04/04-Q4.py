""" 04
알파벳 소문자를 읽어 대문자로 변환하는 함수를 작성하고 main에서 그것을 불러 확인하는 프로그램을 작성하라.
함수 원형은 def to_upper_case(ch):로 한다.
힌트 아스키코드 표를 참조하라. 소문자가 대문자보다 크므로 대문자로 변환하려면 'a' - 'A' 만큼의 숫자를 뺀다.
  > 알파벳 소문자를 입력하세요.
  > m ([Enter])
  > 소문자 m의 대문자는 M입니다.
"""
def to_upper_case(ch):
    return ord(ch) - (ord('a') - ord('A'))


def main():
    print("알파벳 소문자를 입력하세요.");
    c = input()

    print("소문자 %c의 대문자는 %c입니다." % (c, to_upper_case(c)));


if __name__ == '__main__':
    main()
