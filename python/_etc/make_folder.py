import os

# 몇개의 폴더를 생성?
chap_num = 12

# 폴더 만들기
for i in range(1, chap_num+1):
    if i < 10:
        os.mkdir("./chap0" + str(i))  # chap01...
    else:
        os.mkdir("./chap" + str(i))   # chap10...

print("폴더 생성을 완료하였습니다.")
