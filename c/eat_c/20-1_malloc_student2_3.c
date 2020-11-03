// 할당한 (2차원 배열처럼 생긴) 배열 전달하기
#include <stdio.h>
#include <stdlib.h>

void get_average(int numStudent, int (*scores)[numStudent], int numSubject);

int main() {

    int i, j;
    int subject, student;

    printf("입력할 과목의 수: ");
    scanf("%d", &subject);

    printf("학생의 수는?: ");
    scanf("%d", &student);

    // students 의 값이 정해진 후에 scores 을 정의해야 한다.
    int (*scores)[student];
    scores = (int(*)[student])malloc(sizeof(int) * subject * student);

    for (i = 0; i < subject; i++) {
        printf("\n과목 %d 점수 ----------\n", i + 1);
        for (j = 0; j < student; j++) {
            printf("학생 %d의 점수: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
    }
    printf("\n----------------------\n");

    get_average(student, scores, subject);

    free(scores);
    return 0;
}

void get_average(int numStudent, int (*scores)[numStudent], int numSubject) {
    int i, j, sum;
    for (i = 0; i < numSubject; i++) {
        sum = 0;
        for (j = 0; j < numStudent; j++)
            sum += scores[i][j];
        printf("과목 %d  평균점수는 %d점 입니다.\n", i + 1, sum / numStudent);
    }
}
