def addition(x, y):
    return x + y

def multiplication(x, y):
    return x * y

def divided_by_2(x):
    return x / 2


# 다른 파일에서 import로 이 파일을 호출하는 경우 '__main__' (던더메인)을 통하여
# print문을 출력시키지 않도록 할 수 있다.
if __name__ == '__main__':
    print("addition:", addition(10, 5))
    print("multiplication:", multiplication(10, 5))
    print("divided_by_2:", divide_by_2(50))
