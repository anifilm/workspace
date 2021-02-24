"""
Q9
다음과 같이 실행할 때 입력값을 모두 더하여 출력하는 스크립트(C:\doit\myargs.py)를
작성해 보자.

C:\> cd doit
C:\> doit> python myargv.py 1 2 3 4 5 6 7 8 9 10
55

"""
import sys

sum = 0
for i in range(1, len(sys.argv)):
    sum += int(sys.argv[i])

print(sum)
