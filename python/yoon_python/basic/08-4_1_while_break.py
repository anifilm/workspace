""" 08-4 break """

def main():
    i = 0
    while i < 100:
        print(i, end = ' ')
        i += 1
        if i == 20:
            break  # 이 문장이 속한 while 루프를 빠져나간다.

main()
