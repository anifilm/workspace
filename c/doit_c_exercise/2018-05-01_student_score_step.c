// 학생의 성적에 대한 총점과 평균 구하기
#include <stdio.h>

int main() {

	char name[32];
	int num, score1, score2, score3, total;

	printf("이름: ");
	scanf("%s", name);
	printf("학번: ");
	scanf("%d", &num);
	printf("성적(국어, 영어, 수학): ");
	scanf("%d %d %d", &score1, &score2, &score3);
	total = score1 + score2 + score3;

	printf("\n%s 학생에 대한 정보입니다.\n", name);
	printf("학번: %04d\n", num);
	printf("국어: %d점\n", score1);
	printf("영어: %d점\n", score2);
	printf("수학: %d점\n", score3);
	printf("총점: %d, 평균: %.1lf\n", total, (double)total / 3.0);

	return 0;
}
