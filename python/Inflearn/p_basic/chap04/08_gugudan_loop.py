# [연습] 연속적인 구구단 입력
# 2~9사이의 정수를 입력받아 구구단을 출력, 0을 입력시 종료
while True:
    print("구구단 몇 단을 계산할까요? (2~9)")
    user_input = int(input("입력: "))

    if user_input == 0: break
    if not(1 < user_input < 10):
        print("잘못 입력하였습니다. 2부터 9사이의 숫자를 입력하세요.\n")
        continue
    else:
        print("구구단 %d단을 계산합니다." % user_input)
        for i in range(1, 10):
            print("{} x {} = {}".format(user_input, i, user_input*i))
        print()  # 한줄 띄움

print("\n구구단 게임을 종료합니다.")
