""" 02-7 불 자료형

불(bool) 자료형이란 참(True)과 거짓(False)을 나타내는 자료형이다. 불 자료형은
다음 2가지 값만을 가질 수 있다.

 - True : 참
 - False: 거짓

"""

bool_a = True
bool_b = False

print(type(bool_a))     # <class 'bool'>
print(type(bool_b))     # <class 'bool'>

print(1 == 1)   # True
print(2 > 1)    # True
print(2 < 1)    # False


""" 자료형의 참과 거짓
자료형        값           참 or 거짓
Strings     "python"         True
            ""               False
List        [1, 2, 3]        True
            []               False
Tuple       ()               False
Dictionary  {}               False
Numbers     0이 아닌 숫자     True
            0                False
            None             False

"""

list_a = [1, 2, 3, 4]
while list_a:   # list_a가 True인 동안
    print(list_a.pop()) # 리스트의 마지막 요소를 하나씩 꺼내어 출력

# 4
# 3
# 2
# 1

if []:      # 만약 []가 True이면
    print("True")   # 'True' 출력
else:       # 만약 []가 False이면
    print("False")  # 'False' 출력

# 'False'


""" 불 연산 """

result = bool('python')
print(result)   # True
result = bool('')
print(result)   # False

result = bool([1, 2, 3])
print(result)   # True
result = bool([])
print(result)   # False

result = bool(0)
print(result)   # False
result = bool(3)
print(result)   # True
