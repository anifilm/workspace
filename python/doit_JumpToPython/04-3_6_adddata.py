""" 파일을 쓰기 모드로 열어 출력값 적기 """

f = open("./doit/새파일.txt", 'a')

for i in range(11, 20):  # 11부터 19까지 i에 대입
    data = "%d번째 줄입니다.\n" % i
    f.write(data)

f.close()
