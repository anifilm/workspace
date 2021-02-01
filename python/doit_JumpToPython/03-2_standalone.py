"""
나 혼자 코딩!
1부터 10까지의 숫자 중에서 3의 배수를 뺀 나머지 값을 출력해 보자.

"""
num = 0
while num < 10:
    num += 1
    if num % 3 == 0: continue
    print(num)
