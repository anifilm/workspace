# else 구문 예시
# try ~ except ~ else
for i in range(10):
    try:
        result = 10 // i
    except ZeroDivisionError:  # 예외 발생시
        print("Not divided by 0")
    else:  # 예외가 발생하지 않았다면 (정상 실행시)
        print(i, result)
