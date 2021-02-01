""" Passing arguments
함수에 입력되는 arguments는 다양한 형태를 가진다.

2. Default arguments
 - parameter의 기본값을 사용, 함수 호출시 매개변수를 입력하지 않을 경우 기본값을 사용

"""
def print_somthing(my_name, your_name = "TEAMLAB"):  # 기본값 사용
    print("Hello {0}, My name is {1}".format(your_name, my_name))

print_somthing("Sungchul", "TEAMLAB")
print_somthing("Sungchul")
