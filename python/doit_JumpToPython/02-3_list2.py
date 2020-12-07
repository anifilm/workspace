""" 리스트 연산하기 """

# 1. 리스트 더하기 (+)
list_a = [1, 2, 3]
list_b = [4, 5, 6]
result = list_a + list_b    # [1, 2, 3, 4, 5, 6]
print(result)

# 2. 리스트 반복하기 (*)
list_a = [1, 2, 3]
result = list_a * 3         # [1, 2, 3, 1, 2, 3, 1, 2, 3]
print(result)

# 3. 리스트 길이 구하기
list_a = [1, 2, 3]
result = len(list_a)        # 3
print(result)

# 초보자가 실수하기 쉬운 리스트 연산 오류
list_a = [1, 2, 3]
#result = list_a[2] + "hi"  # TypeError: a[2]의 값은 정수이고 "hi"는 문자열이기 때문

result = str(list_a[2]) + "hi"  # 3hi
print(result)


""" 리스트의 수정과 삭제 """

# 리스트에서 값 수정하기
list_a = [1, 2, 3]
list_a[2] = 4       # list_a[2]의 요소값 3이 4로 변경 됨
print(list_a)       # [1, 2, 4]

# del 함수 사용해 리스트 요소 삭제하기
list_a = [1, 2, 3]
del list_a[1]       # list_a[1]의 요소값 삭제
print(list_a)       # [1, 3]

# 다음처럼 슬라이싱 기법을 사용하여 리스트의 요소 여러 개를 한꺼번에 삭제할 수 있다
list_b = [1, 2, 3, 4, 5]
del list_b[2:]      # list_b[2:]에 해당하는 리스트의 요소들이 삭제 됨
print(list_b)       # [1, 2]
