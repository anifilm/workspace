"""
Q9 평균값 구하기

오른쪽과 같이 총 10줄로 이루어진 sample.txt 파일이 있다. sample.txt 파일의 숫자 값을
모두 읽어 총합과 평균 값을 구한 후 평균 값을 result.txt 파일에 쓰는 프로그램을 작성하시오.

"""

file = open("./Q9_sample.txt", 'r')

sum = 0
count = 0
while True:
    line = file.readline()
    if not line: break
    sum += int(line)
    count += 1

file.close()

file = open("./Q9_result.txt", 'w')
file.write(str(sum/count))
file.close()
