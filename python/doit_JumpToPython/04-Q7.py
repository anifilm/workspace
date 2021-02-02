"""
Q7
다음과 같은 내용을 지닌 파일 test.txt가 있다. 이 파일의 내용 중 "java"라는 문자열을
"python"으로 바꾸어서 저장해 보자.
  Life is too short
  you need java

"""
f = open("./doit/test.txt", 'r')
body = f.read()  # test.txt파일의 내용을 body 변수에 저장
f.close()

body = body.replace("java", "python")  # body 문자열에서 "java"를 "python"으로 변경

f = open("./doit/test.txt", 'w')  # 파일을 쓰기 모드로 다시 열기
f.write(body)
f.close()
