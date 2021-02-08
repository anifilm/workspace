def main():
    alphabets = list(range(26))
    ch = ord('A')  # 문자를 아스키 코드로 변환 (정수형)

    for i in range(len(alphabets)):
        alphabets[i] = ch
        ch += 1

    for i in range(len(alphabets)):
        print(chr(alphabets[i]) + ", " + str(alphabets[i]))  # 아스키 코드를 문자로 변환하여 출력


if __name__ == '__main__':
    main()
