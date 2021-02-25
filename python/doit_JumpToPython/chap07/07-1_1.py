"""
정규 표현식은 왜 필요한가?

다음과 같은 문제가 주어졌다고 가정해 보자.
주민등록번호를 포함하고 있는 텍스트가 있다. 이 텍스트에 포함된 모든 주민등록번호의 뒷자리를
* 문자로 변경해 보자.
"""

data = """
park 800905-1049118
kim  700905-1059119
"""

result = []
for line in data.split('\n'):
    word_result = []
    for word in line.split(' '):  # 공백 문자마다 나누기
        if len(word) == 14 and word[:6].isdigit() and word[7:].isdigit():
            word = word[:6] + '-' + '*******'
        word_result.append(word)
    result.append(' '.join(word_result))  # 나눈 단어 조립하기

print('\n'.join(result))
