// 평균 구하기 2
#include <stdio.h>

int main() {

    int arr[10];     // 성적을 저장하는 배열
    int i, ave = 0;

    for (i = 0; i < 10; i++) {   // 학생들의 성적을 입력받는 부분
        printf("%d번째 학생의 성적은? ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)     // 전체 학생 성적의 합을 구하는 부분
        ave = ave + arr[i];

    // 평균을 출력
    ave = ave / 10;
    printf("전체 학생의 평균은: %d\n", ave);

    // 평균을 기준으로 합격, 불합격 출력
    for ( i = 0; i < 10; i++) {
        printf("학생 %d: ", i + 1);
        if (arr[i] >= ave)
            printf("합격\n");
        else
            printf("불합격\n");
    }

    return 0;
}
