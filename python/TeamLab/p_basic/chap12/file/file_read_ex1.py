# file.read(): 파일 안에 있는 내용을 문자열로 반환

file = open("./i_have_a_dream.txt", 'r')
contents = file.read()

print(contents)

file.close()
