# [연습] Yesterday Counter
# "Yesterday" 노래에 "Yesterday" 단어의 개수는?
f = open("./yesterday.txt", 'r')
yesterday_lyric = ""
while True:
    line = f.readline()
    if not line:
        break
    yesterday_lyric = yesterday_lyric + line.strip() + "\n"
f.close()

num_of_yesterday = yesterday_lyric.lower().count("yesterday")

print("Number of a Word 'Yesterday':", num_of_yesterday)
