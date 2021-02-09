# 파이썬 리스트 사용 (자바 ArrayList 예제)

def main():
    list = []

    list.append("aaa")
    list.append("bbb")
    list.append("ccc")

    for i in range(len(list)):
        str = list[i]
        print(str)

    for s in list:
        print(s)


if __name__ == '__main__':
    main()
