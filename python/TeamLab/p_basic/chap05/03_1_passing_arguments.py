""" Passing arguments
함수에 입력되는 arguments는 다양한 형태를 가진다.

1. Keyword arguments
 - 함수에 입력되는 parameter의 변수명을 사용, arguments를 넘김

"""
def print_somthing(my_name, your_name):
    print("Hello {0}, My name is {1}".format(your_name, my_name))

print_somthing("Sungchul", "TEAMLAB")
print_somthing(your_name = "TEAMLAB", my_name = "Sungchul")  # 함수 호출시 keyword 사용
