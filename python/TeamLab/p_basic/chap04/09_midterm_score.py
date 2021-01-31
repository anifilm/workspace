# [연습] 이차원 리스트 처리하기
# 사람 별 평균을 구하라.
kor_score = [49, 79, 20, 100, 80]
math_score = [43, 59, 85, 30, 90]
eng_score = [49, 79, 48, 60, 100]
midterm_score = [kor_score, math_score, eng_score]

student = ['A', 'B', 'C', 'D', 'E']
average_score = []

for i in range(len(midterm_score[0])):
    sum = 0
    for j in range(len(midterm_score)):
        sum += midterm_score[j][i]
    average_score.append(sum / 3)

for i in range(len(average_score)):
    print("%s: %.2f" % (student[i], average_score[i]))
