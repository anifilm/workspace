""" Passing arguments
함수에 입력되는 arguments는 다양한 형태를 가진다.

4. Keyword Variable-length arguments (가변 인자)
 - parameter 이름을 따로 지정하지 않고 입력하는 방법
 - Asterisk(*) 두개를 사용하여 함수의 parameter를 표시함
 - 입력된 값은 dict type으로 사용할 수 있다.
 - 가변 인자는 하나만 선언 가능하며 기존 가변인자 다음에 사용한다.

"""
def kwargs_test(**kwargs):
    print(kwargs)
    print("First value is {first}".format(**kwargs))
    print("Second value is {second}".format(**kwargs))
    print("Third value is {third}".format(**kwargs))


kwargs_test(first=3, second=4, third=5)
