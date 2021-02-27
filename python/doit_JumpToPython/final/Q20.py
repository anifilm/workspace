"""
Q20 전방 탐색

다음은 이메일 주소를 나타내는 정규식이다. 이 정규식은 park@naver.com, kim@daum.net,
lee@myhome.co.kr 등과 매칭된다. 긍정형 전방 탐색 기법을 사용하여 .com, .net이 아닌
이메일 주소는 제외시키는 정규식을 작성하시오.

.*[@].*[.].*$

"""

import re

pat = re.compile(".*[@].*[.](?=com$|net$).*$")

print(pat.match("pahkey@gmail.com"))
print(pat.match("kim@daum.net"))
print(pat.match("lee@myhome.co.kr"))
