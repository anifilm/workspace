def main():
    arr1 = [10, 20, 30, 40, 50]
    arr2 = [1, 2, 3, 4, 5]

    # 슬라이싱을 이용한 리스트 요소값 복사
    arr2[1:4] = arr1[0:3]

    for i in arr2:
        print(i)


if __name__ == '__main__':
    main()
