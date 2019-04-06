print("구구단 몇단을 계산할까요? (2~9)")
x = 1

while (x is not 0):
    x = int(input())
    if x == 0: break

    if not (2 <= x <= 9):
        print ("잘못 입력하셨습니다.", "2부터 9사이 숫자를 입력하세요.")
        continue
    else:
        print("구구단 %d단을 계산합니다." % x)

        for i in range(1,10):
            result = x * i
            print(x, "x", i, "=", result)
        print("구구단 몇단을 계산할까요? (2~9)")

print("구구단 계산을 종료합니다.")
