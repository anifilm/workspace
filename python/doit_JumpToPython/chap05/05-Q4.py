"""
Q4
filter와 lambda를 사용하여 리스트 [1, -2, 3, -5, 8, -3] 에서 음수를 모두 제거해 보자.

"""
result = list(filter(lambda x: x > 0, [1, -2, 3, -5, 8, -3]))
print(result)  # [1, 3, 8]
