// 조건 수식에 따른 if ~ else ~의 복합 명령 문장 실행하기
#include <stdio.h>

int main() {

    int score = 92;
    char grade;

    if (score >= 90) {
        grade = 'A';
        printf("점수는 %d 점이고 등급은 %c 입니다.\n", score, grade);
    } else {
        grade = 'B';
        printf("점수는 %d 점이고 등급은 %c 입니다.\n", score, grade);
    }

    printf("작업 종료\n");

	return 0;
}
