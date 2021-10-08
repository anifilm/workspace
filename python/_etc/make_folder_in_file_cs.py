import os

# 몇개의 폴더를 생성?
chap_num = 12

# 폴더안에 몇개의 파일을 생성?
sect_num = 20

# 폴더 안에 해당 파일 생성
dir_name = ""
file_name = ""

for i in range(1, chap_num+1):
    if i < 10:
        dir_name = "./chap0" + str(i)  # chap01...
    else:
        dir_name = "./chap" + str(i)   # chap10...
    os.mkdir(dir_name)
    for j in range(1, sect_num+1):
        file_name = str(i) + "-" + str(j) + "_.cs"  # 9-12.cs
        f = open(dir_name + "/" + file_name, "w")
        f.write("using System;\n")
        f.write("\n")
        f.write("//\n")
        f.close()

print("폴더와 파일 생성을 완료하였습니다.")
