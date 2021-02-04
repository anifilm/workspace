""" 08-4 break """

def main():
    i = 1
    sum = 0
    while True:
        sum += i
        if sum > 100:  # sum > 100이면 아래의 break가 실행된다.
            print(i, "더했을 때의 합", sum, end = ' ')
            break
        i += 1

main()
