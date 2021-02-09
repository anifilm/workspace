def main():
    arr = [[1, 2, 3], [4, 5, 6, 7]]

    for i in range(len(arr)):
        for j in range(len(arr[i])):
            print(arr[i][j], end = ' ')
        print()

if __name__ == '__main__':
    main()
