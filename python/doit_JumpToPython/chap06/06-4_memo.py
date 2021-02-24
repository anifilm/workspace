""" 간단한 메모장 만들기
필요한 기능은? 메모 추가하기, 메모 조회하기
입력받는 값은? 메모 내용, 프로그램 실행 옵션
출력하는 값은? memo.txt
"""

import sys

option = sys.argv[1]

if option == '-a':
    memo = sys.argv[2]
    file = open("memo.txt", 'a')
    file.write(memo)
    file.write("\n")
    file.close()
elif option == '-v':
    file = open("memo.txt")
    memo = file.read()
    file.close()
    print(memo)
