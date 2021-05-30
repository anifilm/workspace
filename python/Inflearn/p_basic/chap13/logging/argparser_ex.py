# Arg parser
# - Console 창에서 프로그램 실행시 Setting 정보를 저장
# - 거의 모든 Console 기반 python 프로그램 기본으로 제공
# - 특수 모듈도 많이 존재(TF), 일반적으로 argparser를 사용
# - Command-Line option 이라고 부른다.

import argparse

parser = argparse.ArgumentParser(description='Sum two integers.')

parser.add_argument('-a', "--a_value", dest="a", help="A integers", type=int)
parser.add_argument('-b', "--b_value", dest="b", help="B integers", type=int)

args = parser.parse_args()
print(args)
print(args.a)
print(args.b)
print(args.a + args.b)
