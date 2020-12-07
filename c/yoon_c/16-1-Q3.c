/* 문제 16-1 [2차원 배열의 활용]
문제 3
성적관리 프로그램을 작성하자 과목은 국어, 영어, 수학, 국사 이렇게 네 과목이고 학생은
채영, 흥규, 환길, 재훈 이렇게 네 사람이다. 프로그램 사용자로부터 이 네 사람의 네 과목
점수를 입력 받는다. 그리고 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장해야 한다.

저장이 끝났다면, 개인별 총점과 과목별 총점을 계산해서 다음 그림에서 보이는 배열의 위치
에 저장해야 한다. 그리고 마지막에는 저장된 값의 검증을 위한 출력을 보여야 한다.
*/
#include <stdio.h>

int main() {

    const char* subject[4] = {"국어", "영어", "수학", "국사"};
    const char* student[4] = {"채영", "흥규", "환길", "재훈"};
    char* label_stu_total = "총점";
    char* label_sub_total = "과목별 총점";

    int arr[5][5];
    int i, j;
    int temp, stu_total, sub_total, total1 = 0, total2 = 0;

    // 성적 입력 및 학생별 총점 계산
    for (i = 0; i < 4; i++) {
        stu_total = 0;
        for (j = 0; j < 4; j++) {
            printf("%s의 %s 성적 입력: ", student[i], subject[j]);
            scanf("%d", &temp);
            arr[i][j] = temp;
            stu_total += temp;
        }
        arr[i][j] = stu_total;
        total1 += stu_total;
    }
    // 과목별 총점 계산
    for (i = 0; i < 4; i++) {
        sub_total = 0;
        for (j = 0; j < 4; j++)
            sub_total += arr[j][i];
        arr[j][i] = sub_total;
        total2 += sub_total;
    }
    // 총점 계산 검증
    if (total1 == total2)
        arr[i][j] = total1;
    else
        printf("계산 결과 오류! %d %d\n", total1, total2);

    // 저장된 값 출력
    printf("\n%12s %7s %7s %7s %7s %7s \n", " ", subject[0], subject[1],subject[2],subject[3], label_stu_total);
    for (i = 0; i < 5; i++) {
        if (i < 4) printf("%14s ", student[i]);
        else printf("%17s ", label_sub_total);
        for (j = 0; j < 5; j++) {
            printf("%4d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
