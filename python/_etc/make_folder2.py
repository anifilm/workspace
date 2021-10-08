import os

# 몇개의 폴더를 생성?
chap_num = 12
sect_num = 20

dir_name = "0-00"

# 폴더 만들기
for i in range(1, chap_num+1):
    for j in range(1, sect_num+1):
        dir_name = f"{i}-{j:02}"  # 8-09
        os.mkdir(dir_name)

print("폴더 생성을 완료하였습니다.")
