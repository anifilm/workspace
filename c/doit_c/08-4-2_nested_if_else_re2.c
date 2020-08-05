#include <stdio.h>

void main() {

    int score = 86;
    char grade;

    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';

    printf("당신의 점수는 %d 점이고 등급은 %c 입니다.", score, grade);
}
