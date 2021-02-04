""" 08-3 for 루프와 while 루프의 비교 """

def main():
    i = 1
    sum = 0
    while sum <= 100:  # sum의 값이 100이하인 동안 반복
        sum += i
        i += 1
    print(i-1, "더했을 때의 합", sum, end = ' ')

main()
