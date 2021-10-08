import os

# 몇개의 폴더를 생성?
chap_num = 12
sect_num = 20

# 폴더 만들기
for i in range(1, chap_num+1):
    for j in range(1, sect_num+1):
        if j < 10:
            os.mkdir(str(i) + "-0" + str(j))  # 9-09
        else:
            os.mkdir(str(i) + "-" + str(j))   # 9-12

print("폴더 생성을 완료하였습니다.")
