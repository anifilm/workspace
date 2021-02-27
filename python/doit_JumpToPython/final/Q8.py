"""
Q8 역순 저장

다음과 같은 내용의 파일 abc.txt가 있다.

AAA
BBB
CCC
DDD
EEE

이 파일의 내용을 다음과 같이 역순으로 바꾸어 저장하시오.

EEE
DDD
CCC
BBB
AAA

"""

file = open("./Q8_abc.txt", 'r')
lines = file.readlines()
file.close()

lines.reverse()

file = open("./Q8_result.txt", 'w')
for line in lines:
    file.write(line)
file.close()
