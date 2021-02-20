# os 모듈을 사용하여 Directory 다루기

import os
os.mkdir("log")


# 디렉토리가 있는지 확인하기

if not os.path.isdir("log"):
    print("log 폴더를 찾을 수 없습니다. 폴더를 생성합니다.")
    os.mkdir("log")
