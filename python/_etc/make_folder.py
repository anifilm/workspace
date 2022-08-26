import os

# 몇개의 폴더를 생성?
chap_num = int(input("몇 개의 폴더를 생성할까요? > "))

dir_name = "chap00"

# 폴더 만들기
for i in range(1, chap_num+1):
    try:
        dir_name = f"chap{i:02}"  # chap01...
        os.mkdir(dir_name)
    except:
        print("해당폴더가 존재합니다.")

print("폴더 생성을 완료하였습니다.")
