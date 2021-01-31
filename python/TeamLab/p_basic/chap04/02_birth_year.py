# [연습] 무슨 학교 다니세요?
# 태어난 연도를 계산하여 학교 종류를 맞추는 프로그램
from datetime import datetime

print("당신이 태어난 년도를 입력하세요.")
birth_year = int(input())

age = datetime.today().year - birth_year + 1

if 26 >= age >= 20:
    grade = "대학생 입니다"
elif 20 > age >= 17:
    grade = "고등학생 입니다"
elif 17 > age >= 14:
    grade = "중학생 입니다"
elif 14 > age >= 8:
    grade = "초등학생 입니다"
else:
    grade = "학생이 아닙니다"

print("당신의 나이는 %d세 %s." % (age, grade))
