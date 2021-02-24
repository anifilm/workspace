""" 파일을 쓰기 모드로 열어 출력값 적기 """

f = open("./doit/새파일.txt", 'w')

for i in range(1, 11):  # 1부터 10까지 i에 대입
    data = "%d번째 줄입니다.\n" % i
    f.write(data)  # data를 파일 객체 f에 써라

f.close()
