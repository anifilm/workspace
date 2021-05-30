# [연습] Yesterday Counter 2
# "Yesterday" 노래에 "Yesterday" 단어의 개수는?
# 대소문자를 구분하여 "Yesterday"와 "yesterday"의 개수를 나눠서 세는 프로그램을
# 작성하세요.
f = open("./yesterday.txt", 'r')
yesterday_lyric = ""
while True:
    line = f.readline()
    if not line:
        break
    yesterday_lyric = yesterday_lyric + line.strip() + "\n"
f.close()

s_num_of_yesterday = yesterday_lyric.count("Yesterday")
t_num_of_yesterday = yesterday_lyric.count("yesterday")

print ("Number of a Word 'Yesterday'" , s_num_of_yesterday)
print ("Number of a Word 'yesterday'" , t_num_of_yesterday)
