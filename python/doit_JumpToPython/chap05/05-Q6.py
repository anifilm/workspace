"""
Q6
map과 lambda를 사용하여 [1, 2, 3, 4] 리스트의 요소값에 3이 곱해진 리스트 [3, 6, 9, 12]를
만들어 보자.

"""
result = list(map(lambda x: x * 3, [1, 2, 3, 4]))
print(result)  # [1, 3, 8]
