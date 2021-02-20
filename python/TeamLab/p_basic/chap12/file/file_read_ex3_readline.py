# file.readline(): 한 줄씩 읽어 List type으로 반환

with open("./i_have_a_dream.txt", 'r') as file:
    content_list = file.readline()
    print(content_list)
    print(type(content_list))
