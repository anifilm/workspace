""" 프로그램의 외부에 저장된 파일을 읽는 여러 가지 방법 """

# read 함수 사용하기
f = open("./doit/새파일.txt", 'r')

data = f.read()
print(data)

f.close()
