# mode는 'w', encoding="utf8"

file = open("../count_log.txt", 'w', encoding="utf8")

for i in range(1, 11):
    data = "%d번째 줄입니다.\n" % i
    file.write(data)

file.close()
