"""
Q11
glob 모듈을 사용하여 C:\doit 디렉터리의 파일 중 확장자가 .py인 파일만 출력하는 프로그램을
작성해 보자.

"""
import glob

result = glob.glob("./*.py")

for i in result:
    print(i)
