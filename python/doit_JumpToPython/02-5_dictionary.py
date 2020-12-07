""" 02-5 딕셔너리 자료형

딕셔너리란?
파이썬은 대응 관계를 나타낼 수 있는 자료형을 가지고 있다.

요즘 사용하는 대부분의 언어는 이러한 대응 관계를 나타내는 자료형을 갖고 있는데,
이를 연관 배열(Associative array) 또는 해시(Hash)라고 한다.

파이썬에서는 이러한 자료형을 딕셔너리(Dictionary)라고 하며 딕셔너리는 Key와 Value를
한 쌍으로 갖는 자료형이다.

딕셔너리는 리스트나 튜플처럼 순차적으로(sequential) 해당 요소값을 구하지 않고 Key를
통해 Value를 얻는다. 이것이 바로 딕셔너리의 가장 큰 특징이다.

다음은 기본 딕셔너리의 모습이다.
{Key1: Value1, Key2: Value2, Key3: Value3, ...}

"""

# 딕셔너리의 예제
dict = {'name': 'pey', 'phone': '01099983323', 'birth': '0918'}
"""
딕셔너리 dict의 정보
Key         Value
name        pey
phone       01099983323
birth       0918

"""
dict_a = {1: 'hi'}
dict_b = {'a': [1, 2, 3]}


""" 딕셔너리 쌍 추가, 삭제하기 """

# 1. 딕셔너리 쌍 추가하기
dict_a = {1: 'a'}
dict_a[2] = 'b'         # {2: 'b'} 추가
print(dict_a)           # {1: 'a', 2: 'b'}

dict_a['name'] = 'pey'  # {'name': 'pey'} 추가
print(dict_a)           # {1: 'a', 2: 'b', 'name': 'pey'}

dict_a[3] = [1, 2, 3]   # {3: [1, 2, 3]} 추가
print(dict_a)           # {1: 'a', 2: 'b', 'name': 'pey', 3: [1, 2, 3]}

# 2. 딕셔너리 요소 삭제하기
del dict_a[1]           # key가 1인 key: value 삭제
print(dict_a)           # {2: 'b', 'name': 'pey', 3: [1, 2, 3]}


""" 딕셔너리를 사용하는 방법 """

# 딕셔너리에서 Key 사용해 Value 얻기
grade = {'pey': 10, 'julliet': 99}
print(grade['pey'])     # 10
print(grade['julliet']) # 99

dict_a = {'a': 1, 'b': 2}
print(dict_a['a'])      # 1
print(dict_a['b'])      # 2

dict = {'name': 'pey', 'phone': '01099983323', 'birth': '0918'}
print(dict['name'])     # 'pey'
print(dict['phone'])    # '01099983323'
print(dict['birth'])    # '0918'

# 딕셔너리 만들 때 주의 사항
dict_a = {1: 'a', 1: 'b'}   # <- 1이라는 Key값 중복 사용
print(dict_a)           # {1: 'b'} <- 1:'a' 값이 무시됨

#dict_b = {[1, 2]: 'hi'}    # <- 리스트를 Key로 사용
                        # TypeError 발생


""" 딕셔너리 관련 함수 """

# Key 리스트 만들기 (keys)
dict = {'name': 'pey', 'phone': '01099983323', 'birth': '0918'}
result = dict.keys()    # dict_keys(['name', 'phone', 'birth'])
print(result)

"""
파이썬 3.0 이후 버전의 keys 함수, 어떻게 달라졌나?

파이썬 2.7 버전까지는 a.keys() 함수를 호출할 때 반환 값으로 dict_keys가 아닌 리스트를
돌려준다. 리스트를 돌려주기 위해서는 메모리 낭비가 발생하는데 파이썬 3.0 이후 버전에서는
이러한 메모리 낭비를 줄이기 위해 dict_keys 객체를 돌려준다.
다음에 소개할 dict_values, dict_items 역시 파이썬 3.0 이후 버전에서 추가된 것들이다.
만약 3.0 이후 버전에서 반환 값으로 리스트가 필요한 경우에는 'list(a.keys())'를 사용하면
된다. dict_keys, dict_values, dict_items 등은 리스트로 변환하지 않더라도 기본적인
반복(iterate) 구문(예: for문)을 실행할 수 있다.

"""

for k in dict.keys():
    print(k)

result = list(dict.keys())  # ['name', 'phone', 'birth']
print(result)

# Value 리스트 만들기 (values)
result = dict.values()      # dict_values(['pey', '01099983323', '0918'])
print(result)

# Key, Value 쌍 얻기 (items)
result = dict.items()       # dict_items([('name', 'pey'), ('phone', '01099983323'), ('birth', '0918')])
print(result)

# Key: Value 쌍 모두 지우기 (clear)
result = dict.clear()       # {}
print(result)

# Key로 Value 얻기 (get)
dict = {'name': 'pey', 'phone': '01099983323', 'birth': '0918'}
result = dict.get('name')   # 'pey'
print(result)

result = dict.get('phone')  # '01099983323'
print(result)

print(dict.get('nokey'))    # None을 반환
#print(dict['nokey'])       # KeyError 발생

result = dict.get('foo', 'bar')
print(result)               # 'bar'
"""
dict 딕셔너리에는 'foo'에 해당하는 값이 없다. 따라서 디폴트 값인 'bar'를 돌려준다.

"""

# 해당 Key가 딕셔너리 안에 있는지 조사하기 (in)
dict = {'name': 'pey', 'phone': '01099983323', 'birth': '0918'}
result = 'name' in dict     # True
print(result)

result = 'email' in dict    # False
print(result)
