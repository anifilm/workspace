""" 문자열 관련 함수 """

# 문자 개수 세기 (count)
str_a = "hobby"
result = str_a.count('b')   # 2: 문자열 중 문자 'b'의 개수를 돌려준다
print(result)

# 위치 알려주기 1 (find)
str_b = "Python is the best choice"
result = str_b.find('b')    # 14: 문자열에서 'b'가 처음 나온 위치를 반환
print(result)

result = str_b.find('k')    # -1: 찾는 문자나 문자열이 없다면 -1을 반환
print(result)

# 위치 알려주기 2 (index)
str_c = "Life is too short"
result = str_c.index('t')   # 8:  문자열에서 't'가 처음 나온 위치를 반환
print(result)

#result = str_c.index('k')  # ValueError: k가 없기 때문에 오류 발생

# 문자열 삽입 (join)
result = ",".join('abcd')   # 'a,b,c,d': abcd 문자열 각각의 문자 사이에 ','를 삽입
print(result)

result = ",".join(['a', 'b', 'c', 'd'])
print(result)

# 소문자를 대문자로 바꾸기 (upper)
str_d = "hi"
result = str_d.upper()      # 'HI'
print(result)

# 대문자를 소문자로 바꾸기 (lower)
str_d = "HI"
result = str_d.lower()      # 'hi'
print(result)

# 왼쪽 공백 지우기 (lstrip)
str_e = " hi "
result = str_e.lstrip()     # 'hi '
print(result)

# 오른쪽 공백 지우기 (rstrip)
str_e = " hi "
result = str_e.rstrip()     # ' hi'
print(result)

# 양쪽 공백 지우기 (strip)
str_e = " hi "
result = str_e.strip()      # 'hi'
print(result)

# 문자열 바꾸기 (replace)
str_f = "Life is too short"
result = str_f.replace("Life", "Your leg")
print(result)               # Your leg is too short

# 문자열 나누기 (split)
str_f = "Life is too short"
result = str_f.split()      # 공백을 기준으로 문자열 나눔
print(result)               # ['Life', 'is', 'too', 'short']

str_g = "a:b:c:d"
result = str_g.split(':')   # ':' 문자를 기준으로 문자열 나눔
print(result)               # ['a', 'b', 'c', 'd']
