"""
Q5
다음은 "test.txt"라는 파일에 "Life is too short" 문자열을 저장한 후 다시 그 파일을
읽어서 출력하는 프로그램이다.

  f1 = open("./doit/test.txt", 'w')
  f1.write("Life is too short")

  f2 = open("./doit/test.txt", 'r')
  print(f2.read())

이 프로그램은 우리가 예상한 "Life is too short"이라는 문장을 출력하지 않는다. 우리가
예상한 값을 출력할 수 있도록 프로그램을 수정해 보자.

"""
f1 = open("./doit/test.txt", 'w')
f1.write("Life is too short")
f1.close()

f2 = open("./doit/test.txt", 'r')
print(f2.read())
f2.close()


""" 파일을 닫지 않은 상태에서 다시 파일을 열게되는 경우에는 파일에 저장한 데이터를 읽을 수 없다.
따라서 열린 파일 객체를 close로 닫아준 뒤 다시 파일을 열어서 내용을 읽어야 한다. """
