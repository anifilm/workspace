import os

# 파일 생성
for i in range(1, 30):
    for j in range(1, 21):
        f = open(str(i) + "-" + str(j) + "_.cs", "w")
        f.write("using System\n")
        f.write("\n")
        f.write("//\n")
f.close()
