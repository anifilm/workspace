# finally 구문 예시
# try ~ except ~ finally
try:
    for i in range(1, 10):
        result = 10 // i
        print(i, "------", result)
except ZeroDivisionError:  # 예외 발생시
    print("Not divided by 0")
finally:  # 예외 발생과 상관없이 무조건 실행
    print("종료되었습니다.")
