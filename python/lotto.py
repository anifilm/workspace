import random

for i in range(0, 5):
    lotto = random.sample(range(1, 46), 6)
    #lotto.sort()
    print(lotto)
