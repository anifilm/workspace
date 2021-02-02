""" 프로그램의 외부에 저장된 파일을 읽는 여러 가지 방법 """

# readline 함수 사용하기
f = open("./doit/새파일.txt", 'r')

line = f.readline()
print(line)  # "1번째 줄입니다."

f.close()
