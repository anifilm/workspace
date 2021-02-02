""" 스택 (Stack) Example """

# 스택 구조를 활용, 입력된 글자를 역순으로 출력
word = input("Input a word: ")  # Input word
word_list = list(word)  # String to list

for i in range(len(word_list)):
    print(word_list.pop(), end='')  # 하나씩 pop()하여 출력
