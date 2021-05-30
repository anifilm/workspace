# file.readline(): 한 줄씩 파일 끝까지 출력

with open("../i_have_a_dream.txt", 'r') as file:
    i = 0
    while True:
        line = file.readline()
        if not line:
            break
        print(str(i) + " : " + line.replace("\n", ""))  # 한 줄씩 값 출력
        i += 1
