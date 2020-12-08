""" 리스트 관련 함수 """

# 리스트에 요소 추가 (append)
list_a = [1, 2, 3]
list_a.append(4)    # 리스트의 마지막에 4를 추가
print(list_a)       # [1, 2, 3, 4]

list_a.append([5, 6])   # 리스트의 마지막에 [5, 6]을 추가
print(list_a)       # [1, 2, 3, 4, [5, 6]]

# 리스트 정렬 (sort)
list_b = [1, 4, 3, 2]
list_b.sort()
print(list_b)       # [1, 2, 3, 4]

list_c = ['a', 'c', 'b']
list_c.sort()
print(list_c)       # ['a', 'b', 'c']

# 리스트 뒤집기 (reverse)
list_c = ['a', 'c', 'b']
list_c.reverse()    # 리스트를 역순으로 뒤집어 준다
print(list_c)       # ['b', 'c', 'a']
"""
reverse() 함수는 리스트를 역순으로 뒤집어 준다. 이때 리스트 요소를 순서대로 정렬한 다음
다시 역순으로 정렬하는 것이 아니라 그저 현재의 리스트를 그대로 거꾸로 뒤집는다.

"""

# 위치 반환 (index)
list_a = [1, 2, 3]
result = list_a.index(3)    # 2
print(result)

result = list_a.index(1)    # 0
print(result)

#result = list_a.index(0)   # ValueError: 값 0은 해당 리스트에 존재하지 않기 때문

# 리스트에 요소 삽입 (insert)
list_a = [1, 2, 3]
list_a.insert(0, 4) # list_a[0] 위치에 4 삽입
print(list_a)       # [4, 1, 2, 3]

list_a.insert(3, 5) # list_a[3] 위치에 5 삽입
print(list_a)       # [4, 1, 2, 5, 3]

# 리스트 요소 제거 (remove)
list_d = [1, 2, 3, 1, 2 ,3]
list_d.remove(3)    # 리스트에 있는 3을 삭제 (요소가 중복되어 있는 경우 앞의 하나만 삭제 함)
print(list_d)       # [1, 2, 1, 2, 3]

list_d.remove(3)
print(list_d)       # [1, 2, 1, 2]

# 리스트 요소 끄집어내기 (pop)
list_a = [1, 2, 3]
result = list_a.pop()   # 리스트의 마지막 요소를 삭제한 후 해당 값을 반환
print(result)       # 3

# 리스트에 포함된 요소 x의 개수 세기 (count)
list_b = [1, 2, 3, 1]
result = list_b.count(1)    # 리스트에 있는 값 1의 개수를 반환
print(result)       # 2

# 리스트 길이 구하기 (리스트 전체 요소의 개수는 len() 함수를 사용하여 알 수 있다)
list_b_len = len(list_b)
print(list_b_len)   # 4

# 리스트 확장 (extend)
list_a = [1, 2, 3]
list_a.extend([4, 5])
print(list_a)       # [1, 2, 3, 4, 5]

list_b = [6, 7]
list_a.extend(list_b)
print(list_a)       # [1, 2, 3, 4, 5, 6, 7]

list_a += [8, 9]    # extend()와 동일
print(list_a)       # [1, 2, 3, 4, 5, 6, 7, 8, 9]
"""
extend(x)에서 x에는 리스트만 올 수 있으며 원래의 list_a 리스트에 x 리스트를 더하게 된다
list_a.extend(4, 5)는 list_a += [4, 5]와 동일하다.

"""
