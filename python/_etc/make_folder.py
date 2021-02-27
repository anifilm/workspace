import os

for i in range(1, 21):
    if i < 10:
        os.mkdir("./chap0" + str(i))
    else:
        os.mkdir("./chap" + str(i))
