# Namespace 사용 예시

# alias 설정하기 - 모듈명을 별칭으로 사용
# ... as fah -> fah를 별칭으로 지정
import fah_converter as fah
print(fah.convert_c_to_f(36.5))

# 모듈에서 특정 함수 또는 클래스만 호출
# fah_converter 모듈에서 convert_c_to_f 함수만 호출
from fah_converter import convert_c_to_f
print(convert_c_to_f(36.5))

# 모듈에서 모든 함수 또는 클래스를 호출
# fah_converter 모듈에서 모든 함수와 클래스를 호출
from fah_converter import *
print(convert_c_to_f(36.5))
print(B)
