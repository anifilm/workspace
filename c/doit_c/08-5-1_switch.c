// switch 문을 사용하여 점수에 따른 등급 지정하기
#include <stdio.h>

int main() {

    int score = 86;
    char grade;

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("당신의 점수는 %d 점이고 등급은 %c 입니다.", score, grade);

	return 0;
}
