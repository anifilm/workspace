# Log 파일 생성하기
#  1) 디렉터리가 있는지
#  2) 파일이 있는지 확인 후

import os

if not os.path.isdir("log"):
    os.mkdir("log")

if not os.path.exists("log/count_log.txt"):
    file = open("log/count_log.txt", 'w', encoding="utf8")
    file.write("기록이 시작됩니다.\n")
    file.close()

with open("log/count_log.txt", 'a', encoding="utf8") as file:
    import random, datetime
    for i in range(1, 11):
        stamp = str(datetime.datetime.now())
        value = random.random() * 1000000
        log_line = stamp + "\t" + str(value) + " 값이 생성되었습니다.\n"
        file.write(log_line)
