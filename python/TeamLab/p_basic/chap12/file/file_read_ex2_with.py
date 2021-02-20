# with 구문 사용

with open("./i_have_a_dream.txt", 'r') as file:
    contents = file.read()
    print(contents)
    print(type(contents))
