""" 파일을 쓰기 모드로 열어 출력값 적기 """

import sys

args = sys.argv[1:]
for i in args:
    print(i.upper(), end=' ')
