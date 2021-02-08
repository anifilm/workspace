def main():
    arr = list(range(10))  # 길이가 10인 리스트 생성
    total = 0; num = 1

    for i in range(len(arr)):
        arr[i] = num
        num += 1

    for i in range(len(arr)):
        total += arr[i]

    print(total)

    d_arr = list(range(5))  # 길이가 5인 리스트 생성
    count = 0

    d_arr[0] = 1.1; count += 1
    d_arr[1] = 2.1; count += 1
    d_arr[2] = 3.1; count += 1

    mtotal = 1
    for i in range(count):
        mtotal *= d_arr[i]

    print(mtotal)


if __name__ == '__main__':
    main()
