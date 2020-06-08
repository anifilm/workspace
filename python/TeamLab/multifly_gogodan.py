print("구구단 몇단을 계산할까요?")
user_input = int(input())

print("구구단 %d단을 계산합니다." % user_input)

for i in range(1,10):
    result = user_input * i
    print(user_input, "x", i, "=", result)
