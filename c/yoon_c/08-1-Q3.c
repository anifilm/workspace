/* 문제 08-1 [if~else문의 활용]
문제 3
학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자. 학생의 성적이 90점 이상
이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D 그리고 그 미만이면 F다!
프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다. 그리고는 평균을 구한
다음 그에 적절한 학점을 출력하면 된다.
*/
#include <stdio.h>

int main() {

    char grade;
    int k_score, e_score, m_score, total;
    double avg;

    printf("국어, 영어, 수학 점수를 입력: ");
    scanf("%d %d %d", &k_score, &e_score, &m_score);

    total = k_score + e_score + m_score;
    avg = (double)total / 3;

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("\n학점은 %c\n", grade);

    return 0;
}
