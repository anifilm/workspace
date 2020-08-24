// Q4 성적 처리 프로그램 만들기
// 세 명의 학생에 대한 학번과 과목별 성적을 입력 받아서 등수를 기준으로 출력하는 성적 처리 프로그램을
// 작성해 보세요. 입력 형식과 출력 형식은 아래와 같습니다.
// printf, scanf, 배열만 사용해서 성적 처리 프로그램을 만들어야 합니다.
#include <stdio.h>

int main() {

    int i, j, tmp;

    char name[3][10];
    int score1[3] = {0,};
    int score2[3] = {0,};
    int score3[3] = {0,};
    int sum[3], avg[3];
    int grade[3] = {1, 2, 3};

    // 세 명의 학생에 대한 정보 입력
    for (i = 0; i < 3; i++) {
        printf("%d 번째 학생 이름: ", i+1);
        scanf("%s", name[i]);

        do {
            printf("국어 점수: ");
            scanf("%d", &score1[i]);
            if (score1[i] > 100) printf("다시 입력하세요.\n");
        } while (score1[i] > 100);

        do {
            printf("영어 점수: ");
            scanf("%d", &score2[i]);
            if (score2[i] > 100) printf("다시 입력하세요.\n");
        } while (score2[i] > 100);

        do {
            printf("수학 점수: ");
            scanf("%d", &score3[i]);
            if (score3[i] > 100) printf("다시 입력하세요.\n");
        } while (score3[i] > 100);

        putchar('\n');
    }

    // 총점 평균 계산
    for (i = 0; i < 3; i++) {
        sum[i] = score1[i] + score2[i] + score3[i];
        avg[i] = sum[i] / 3;
    }

    // 등수 계산 (평균 큰 순서대로 재정렬)
    for (i = 0; i < 3; i++) {
        for (j = i+1; j < 3; j++) {
            if (avg[i] < avg[j]) {
                tmp = grade[i];
                grade[i] = grade[j];
                grade[j] = tmp;
            }
        }
    }

    // 정보 출력 (등수 순서로)
    printf("--------------------------------\n");
    printf(" 이름   국어 영어 수학  총점  평균 등수\n");
    printf("--------------------------------\n");
    for (i = 1; i <= 3; i++) {
        for (j = 0; j < 3; j++) {
            if (grade[j] == i)
                printf("%s  %3d %3d %3d  %4d %3d %2d등\n", name[j], score1[j], score2[j], score3[j], sum[j], avg[j], grade[j]);
        }
    }

    return 0;
}
