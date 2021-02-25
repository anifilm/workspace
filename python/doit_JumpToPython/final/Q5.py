"""
Q5 피보나치 함수

첫 번째 항의 값이 0이고 두 번째 항의 값이 1일 때, 이후에 이어지는 항은 이전의 두 항을
더한 값으로 이루어지는 수열을 피보나치 수열이라고 한다.

1, 1, 2, 3, 4, 8, 13, ...

입력을 정수 n으로 받았을 때, n 이하까지의 피보나치 수열을 출력하는 함수를 작성해 보자.

"""

def fibo(n):
    lst = []
    for i in range(0, n):
        if i < 2:
            lst.append(1)
        else:
            lst.append(lst[i-1] + lst[i-2])
    return lst


print(fibo(8))
