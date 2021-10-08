# import os

# 몇개의 파일을 생성?
chap_num = 12
sect_num = 20

filename = "0-0_.cs"

# 파일 생성
for i in range(1, chap_num+1):
    for j in range(1, sect_num+1):
        filename = f"{i}-{j}_.cs" # 8-9_.cs
        f = open(filename, "w")
        f.write("using System\n")
        f.write("\n")
        f.write("//\n")
f.close()

print("파일 생성을 완료하였습니다.")
