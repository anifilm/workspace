# [연습] 구구단 계산기
# 아래와 같이 출력되는 프로그램을 만드시오.
print("구구단 몇단을 계산할까요?")
user_input = int(input())

print("구구단 %d단을 계산합니다." % user_input)
for i in range(1, 10):
    print("{} x {} = {}".format(user_input, i, user_input*i))
