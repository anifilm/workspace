""" 프로그램의 외부에 저장된 파일을 읽는 여러 가지 방법 """

# readline 함수 사용하기 (모든 줄을 읽어서 화면에 출력)
f = open("./doit/새파일.txt", 'r')

while True:
    line = f.readline()
    if not line: break
    print(line, end='')

f.close()
