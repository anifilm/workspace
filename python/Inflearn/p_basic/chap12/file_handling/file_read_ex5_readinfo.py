# 단어 통계 정보 산출

with open("../i_have_a_dream.txt", 'r') as file:
    contents = file.read()
    word_list = contents.split(" ")  # 빈칸을 기준으로 단어를 분리하여 리스트 생성
    line_list = contents.split("\n") # 한 줄씩 분리하여 리스트 생성

print("Total Number of Characters:", len(contents))
print("Total Number of Words:", len(word_list))
print("Total Number of Lines:", len(line_list))
