# mode 'a' (추가 모드)

with open("../count_log.txt", 'a', encoding="utf8") as file:
    for i in range(1, 11):
        data = "%d번째 줄입니다.\n" % i
        file.write(data)
