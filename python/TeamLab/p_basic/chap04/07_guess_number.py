# [연습] 숫자 찾기 게임
# 1~100 임의의 숫자를 맞추세요.
import random  # 난수 발생 함수 호출

guess_number = random.randint(1, 100)  # 1~100사이 정수 난수 발생

print("1~100사이의 숫자를 맞춰보세요.")
user_input = int(input("입력: "))  # 사용자 입력을 받음

while user_input is not guess_number:  # 사용자 입력과 난수가 같은지 판단
    if user_input < guess_number:  # 입력한 숫자보다 크다면
        print("입력한 숫자 보다 큽니다.")
    else:  # 입력한 숫자 보다 작다면
        print("입력한 숫자 보다 작습니다.")
    user_input = int(input("입력: "))  # 다시 사용자 입력을 받음
else:
    print("정답입니다.", "입력한 숫자는", user_input, "입니다.")  # 종료 조건
