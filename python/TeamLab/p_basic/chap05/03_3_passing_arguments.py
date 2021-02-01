""" Passing arguments
함수에 입력되는 arguments는 다양한 형태를 가진다.

3. Variable-length arguments (가변 인자)
 - 개수가 정해지지 않은 변수를 함수의 parameter로 사용하는 방법
 - Keyword arguments와 함께, arguments 추가 가능
 - Asterisk(*) 기호를 사용하여 함수의 parameter를 표시
 - 입력된 값은 tuple type으로 사용할 수 있다.
 - 가변 인자는 하나만 선언 가능하며 마지막 parameter의 위치에 선언한다.

 - 가변 인자는 일반적으로 *args를 변수명으로 사용
 - 기존 parameter 이후에 나오는 값을 tuple로 저장

"""
def asterisk_test(a, b, *args):
    return a + b + sum(args)

print(asterisk_test(1, 2, 3, 4, 5))
