import os

# 몇개의 폴더를 생성?
chap_num = 12

# 폴더 안에 해당 파일 생성
dir_name = "chap00"
file_name = ".keep"

for i in range(1, chap_num+1):
    dir_name = f"chap{i:02}"  # chap01...
    os.mkdir(dir_name)
    f = open(dir_name + "/" + file_name, "w")
    # f.write("\n")  # 파일안에 작성할 내용
    f.close()

print("폴더와 파일 생성을 완료하였습니다.")
