""" 문자열 포매팅 """

# 1. 숫자 바로 대입
print("I eat %d apples." % 3)

# 2. 문자열 바로 대입
print("I eat %s apples." % "five")

# 3. 숫자 값을 나타내는 변수로 대입
number = 3
print("I eat %s apples." % number)

# 4. 2개 이상의 값 넣기
number = 10
day = "three"
print("I ate %d apples. so I was sick for %s days." % (number, day))


""" 문자열 포맷 코드
코드      설명
%s      문자열 (String)
%c      문자 1개 (Character)
%d      정수 (Integer)
%f      부동 소수 (Floating-point)
%o      8진수
%x      16진수
%%      Literal % (문자 '%' 자체)

"""

# %s 자동으로 값을 문자열로 바꿔준다
print("I have %s apples." % 3)  # 'I have 3 apples.'
print("rate is %s" % 3.234)     # 'rate is 3.234'


""" 포매팅 연산자 %d와 %를 같이 쓸 때 %%를 쓴다 """
print("Error is %d%%" % 98)     # 'Error is 98%'


""" 포맷 코드와 숫자 함께 사용하기 """

# 1. 정렬과 공백
print("%10s" % "hi")            # '        hi'
print("%-10sjane" % "hi")       # 'hi        jane'

# 2. 소수점 표현하기
print("%0.4f" % 3.42134234)     # '3.4213'
print("%10.4f" % 3.42134234)    # '    3.4213'


""" format 함수를 사용한 포매팅 """

# 숫자 바로 대입하기
print("I eat {0} apples.".format(3))

# 문자열 바로 대입하기
print("I eat {0} apples.".format("five"))

# 숫자 값을 가진 변수로 대입히기
number = 3
print("I eat {0} apples.".format(number))

# 2개 이상의 값 넣기
number = 10
day = "threee"
print("I ate {0} apples. so I was sick for {1} days.".format(number, day))

# 이름으로 넣기
print("I ate {number} apples. so I was sick for {day} days.".format(number = 10, day = 3))

# 인덱스와 이름을 혼용해서 넣기
print("I ate {0} apples. so I was sick for {day} days.".format(10, day = 3))

# 왼쪽 정렬
print("{0:<10}".format("hi"))   # 'hi        '

# 오른쪽 정렬
print("{0:>10}".format("hi"))   # '        hi'

# 가운데 정렬
print("{0:^10}".format("hi"))   # '    hi    '

# 공백 채우기
print("{0:=^10}".format("hi"))  # '====hi===='
print("{0:!<10}".format("hi"))  # 'hi!!!!!!!!'

# 소수점 표현하기
y = 3.42134234
print("{0:0.4f}".format(y))     # '3.4213'
print("{0:10.4f}".format(y))    # '    3.4213'

# { 또는 } 문자 표현하기
print("{{ and }}".format())     # '{ and }'


""" f 문자열 포매팅 """

name = '임채영'
age = 43
print(f'나의 이름은 {name} 입니다. 나이는 {age} 입니다.')
print(f'나는 내년이면 {age + 1}살이 된다.')

# 딕셔너리 사용
d = {'name': '임채영', 'age': 43}
print(f'나의 이름은 {d["name"]} 입니다. 나이는 {d["age"]} 입니다.')

# 왼쪽 정렬
print(f'{"hi":<10}')    # 'hi        '

# 오른쪽 정렬
print(f'{"hi":>10}')    # '        hi'

# 가운데 정렬
print(f'{"hi":^10}')    # '    hi    '

# 공백 채우기
print(f'{"hi":=^10}')   # '====hi===='
print(f'{"hi":!<10}')   # 'hi!!!!!!!!'

# 소수점 표현하기
y = 3.42134234
print(f'{y:0.4f}')      # '3.4213'
print(f'{y:10.4f}')     # '    3.4213'

# { 또는 } 문자 표현하기
print(f'{{ and }}')     # '{ and }'
