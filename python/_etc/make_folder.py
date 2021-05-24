import os

# 폴더 만들기
for i in range(1, 30):
    if i < 10:
        os.mkdir("./chap0" + str(i))
    else:
        os.mkdir("./chap" + str(i))

print("폴더 생성을 완료하였습니다.")
