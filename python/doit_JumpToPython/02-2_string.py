""" 02-2 문자열 자료형

"Life is too short, You need Python"
"a"
"123"

"""

""" 문자열은 어떻게 만들고 사용할까? """

# 1. 큰 따옴표 (" ") 사용
str_a = "Hello World"
print(str_a)

# 2. 작은 따옴표 (' ') 사용
str_b = 'Python is fun'
print(str_b)

# 3. 큰 따옴표 3개 연속 (""" """) 사용
str_c = """Life is too short, You need Python"""
print(str_c)

# 4. 작은 따옴표 3개 연속 (''' ''') 사용
str_d = '''Life is too short, You need Python'''
print(str_d)


""" 문자열 안에 작은 따옴표나 큰 따옴표를 포함시키고 싶을 때 """

# 1. 문자열에 작은 따옴표 (') 포함시키기
str_e = "Python's favorite food is perl"
print(str_e)

# 2. 문자열에 큰 따옴표 (") 포함시키기
str_f = '"Python is very easy." he says.'
print(str_f)

# 3. 백슬래시 (\)를 사용해서 작은 따옴표 (')와 큰 따옴표 (")를 문자열에 포함시키기
str_g = 'Python\'s favorite food is perl'
str_h = "\"Python is very easy.\" he says."
print(str_g)
print(str_h)


""" 여러 줄인 문자열을 변수에 대입하고 싶을 때 """

# 1. 줄을 바꾸는 이스케이프 코드 '\n' 삽입하기
str_m_line = "Life is too short\nYou need python"
print(str_m_line)

str_m_line2 = '''
Life is too short
You need python'''
print(str_m_line2)

str_m_line3 = """
Life is too short
You need python"""
print(str_m_line3)


""" 이스케이프 코드란?

프로그래밍할 때 사용할 수 있도록 미리 정의해 둔 '문자 조합'이다.
주로 출력을 보기 좋게 정렬하는 용도로 사용한다.

코드      설명
\n      문자열 안에서 줄을 바꿀 때 사용
\t      문자열 사이에 탭 간격을 줄 때 사용
\\      문자 \를 그대로 표현할 때 사용
\'      작은 따옴표 (')를 그대로 표현할 때 사용
\"      큰 따옴표 (")를 그대로 표현할 때 사용
\r      캐리지 리턴 (줄 바꿈 문자, 현재 커서를 가장 앞으로 이동)
\f      폼 피드 (줄 바꿈 문자, 현재 커서를 다음 줄로 이동)
\a      벨 소리 (출력할 때 PC 스피커에서 '삑' 소리가 난다)
\b      백 스페이스
\000    널 문자

"""
