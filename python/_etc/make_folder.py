import os

# 몇개의 폴더를 생성?
chap_num = 12

dir_name = "chap00"

# 폴더 만들기
for i in range(1, chap_num+1):
    dir_name = f"chap{i:02}"  # chap01...
    os.mkdir(dir_name)

print("폴더 생성을 완료하였습니다.")
