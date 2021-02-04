""" 08-3 for 루프와 while 루프의 비교 """

def main():
    i = 1
    sum = 0  # 1부터 10까지의 합이 이 변수에 저장된다.
    while i < 11:  # i의 값이 11보다 작은 동안 반복
        sum += i   # sum의 값을 i만큼 증가시킴
        i += 1     # i의 값을 1 증가시킴
    print("sum =", sum, end = ' ')

main()
