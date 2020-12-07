""" 문자열 인덱싱과 슬라이싱 """

# 문자열 인덱싱
str_a = "Life is too short, You need Python"
print(str_a[3])     # 'e'

# 문자열 인덱싱 활용하기
print(str_a[0])     # 'L'
print(str_a[12])    # 's'
print(str_a[-1])    # 'n'

print(str_a[-2])    # 'o'
print(str_a[-5])    # 'y'

# 문자열 슬라이싱
str_b = str_a[0] + str_a[1] + str_a[2] + str_a[3]
print(str_b)        # 'Life'

print(str_a[0:4])   # 'Life'
print(str_a[0:3])   # 'Lif'  -> 0 <= str_a < 3

# 문자열을 슬라이싱하는 방법
print(str_a[0:5])   # 'Life '

print(str_a[0:2])   # 'Li'
print(str_a[5:7])   # 'is'
print(str_a[12:17]) # 'short'

print(str_a[19:])   # 'You need Python'

print(str_a[:17])   # 'Life is too short'

print(str_a[:])     # 'Life is too short, You need Python'

print(str_a[19:-7]) # 'You need'

# 슬라이싱으로 문자열 나누기
str_b = "20200827Rainy"
date = str_b[:8]
weather = str_b[8:]
print(date)         # '20200827'
print(weather)      # 'Rainy'

year = str_b[:4]
day = str_b[4:8]
weather = str_b[8:]
print(year)         # '2020'
print(day)          # '0827'
print(weather)      # 'Rainy'


""" Pithon이라는 문자열을 Python으로 바꾸려면? """

a = "Pithon"
print(a[1])         # 'i'
#a[1] = 'y'         # 문자열 자료형은 그 요소값을 변경할 수 없다 (immutable 자료형)
print(a[:1] + 'y' + a[2:])  # 'Python'
