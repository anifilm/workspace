import os

# 폴더 만들기
for i in range(1, 11):
    for j in range(1, 16):
        if j < 10:
            os.mkdir(str(i) + "-0" + str(j))
        else:
            os.mkdir(str(i) + "-" + str(j))
