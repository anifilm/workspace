""" range 함수의 예시 살펴보기
앞에서 살펴본 '60점 이상이면 합격'이라는 문장을 출력하는 예제도 range 함수를 사용해서
바꿀 수 있다. 다음을 보자

"""
marks = [90, 25, 67, 45, 80]  # 학생들의 시험 점수 리스트
for number in range(len(marks)):
    if marks[number] < 60: continue  # 점수가 60점 미만이면 처음으로 돌아간다.
    print("%d번 학생 축하합니다. 합격입니다." % (number + 1))
