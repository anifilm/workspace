""" 프로그램의 외부에 저장된 파일을 읽는 여러 가지 방법 """

# readlines 함수 사용하기
f = open("./doit/새파일.txt", 'r')

lines = f.readlines()
for line in lines:
    print(line, end='')

f.close()
