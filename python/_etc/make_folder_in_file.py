import os

# 폴더 안에 해당 파일 생성
dir_name = ""
file_name = ""
for i in range(1, 30):
    if i < 10:
        dir_name = "./chap0" + str(i)
    else:
        dir_name = "./chap" + str(i)
    os.mkdir(dir_name)
    for j in range(1, 21):
        file_name = str(i) + "-" + str(j) + "_.cs"
        f = open(dir_name + "/" + file_name, "w")
        f.write("using System;\n")
        f.write("\n")
        f.write("//\n")
        f.close()

print("폴더와 파일 생성을 완료하였습니다.")
