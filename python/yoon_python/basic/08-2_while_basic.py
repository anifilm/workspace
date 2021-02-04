""" 08-2 True가 될 때까지 반복하는 while 루프 """

def main():
    cnt = 0
    while cnt < 3:  # cnt의 값이 3보다 작으면 반복 (조건이 True이면 반복)
        print(cnt, end = ' ')
        cnt += 1  # cnt에 저장된 값을 1 증가시킴

main()
