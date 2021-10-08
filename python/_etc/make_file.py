# import os

# 몇개의 파일을 생성?
chap_num = 12
sect_num = 20

# 파일 생성
for i in range(1, chap_num+1):
    for j in range(1, sect_num+1):
        f = open(str(i) + "-" + str(j) + "_.cs", "w")  # 9-12.cs
        f.write("using System\n")
        f.write("\n")
        f.write("//\n")
f.close()

print("파일 생성을 완료하였습니다.")
