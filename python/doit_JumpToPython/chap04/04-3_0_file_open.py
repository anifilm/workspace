""" 04-3 파일 읽고 쓰기 """

""" 파일 생성하기

f = open("./doit/새파일.txt". 'w')
...
f.close()

파일 객체 = open(파일 이름, 파일 열기 모드)

파일 열기 모드   설명
     r          읽기 모드 - 파일을 읽기만 할 때 사용
     w          쓰기 모드 - 파일에 내용을 쓸 때 사용
     a          추가 모드 - 파일의 마지막에 새로운 내용을 추가할 때 사용

"""

""" 파일을 쓰기 모드로 열어 출력값 적기 """

# writedata.py


""" 프로그램의 외부에 저장된 파일을 읽는 여러 가지 방법 """

# readline.py

# readline_all.py

# readlines 함수 사용하기
# readlines.py

# read 함수 사용하기
# read.py


""" 파일에 새로운 내용 추가하기 """

# adddata.py


""" with문과 함께 사용하기 """

f = open("./doit/foo.txt", 'w')
f.write("Life is too short, you need python")
f.close()


with open("./doit/foo.txt", 'w') as f:
    f.write("Life is too short, you need python")


""" sys 모듈로 매개변수 주기 """

# sys1.py
# sys2.py
