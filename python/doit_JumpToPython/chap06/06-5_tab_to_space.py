""" 탭을 4개의 공백으로 바꾸기
필요한 기능은? 문서 파일 읽어 들이기, 문자열 변경하기
입력받는 값은? 탭을 포함한 문서 파일
출력하는 값은? 탭이 공백으로 수정된 문서 파일
"""

import sys

src = sys.argv[1]
dest = sys.argv[2]

file = open(src)
tab_content = file.read()
file.close()
space_content = tab_content.replace('\t', ' ' * 4)

file = open(dest, 'w')
file.write(space_content)
file.close()
