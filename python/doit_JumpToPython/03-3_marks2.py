""" for문과 continue문
while문에서 살펴본 continue문을 for문에서도 사용할 수 있다. 즉 for문 안의 문장을
수행하는 도중에 continue문을 만나면 for문의 처음으로 돌아가게 된다.

앞에서 for문 응용 예제를 그대로 사용해서 60점 이상인 사람에게는 축하 메시지를 보내고
나머지 사람에게는 아무 메시지도 전하지 않는 프로그램을 작성해 보자.

"""
marks = [90, 25, 67, 45, 80]  # 학생들의 시험 점수 리스트
number = 0  # 학생에게 붙여 줄 번호
for mark in marks:  # 90, 25, 67, 45, 80을 순서대로 mark에 대입
    number += 1
    if mark < 60: continue  # 점수가 60점 미만이면 처음으로 돌아간다.
    print("%d번 학생 축하합니다. 합격입니다." % number)
