// 6개의 난수를 생성하고 오름차순으로 정렬하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_COUNT 6

int main() {

    int i = 0, j, count, check, temp = 0, num[MAX_COUNT];

    srand(time(NULL));

    // 6개의 숫자를 랜덤으로 생성
    num[0] = 1 + rand() % 9;
    while (i < MAX_COUNT) {
        num[i] = 1 + rand() % 99;
        // 중복 값 체크
        for (check = 0; check < i; check++)
            if (num[check] == num[i]) break;
        if (check == i) i++;
    }

    printf("생성된 값: ");
    for (i = 0; i < MAX_COUNT; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    // 버블 소트로 num 배열의 값을 오름차순으로 정렬
    for (i = 0; i < MAX_COUNT - 1; i++) {
        for (j = 0; j < MAX_COUNT - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
        // 버블 소트의 진행 과정을 단계별로 확인
        printf("%d단계: ", i + 1);
        for (count = 0; count < MAX_COUNT; count++)
            printf("%d ", num[count]);
        printf("\n");
    }

    printf("\n정렬결과: ");
    for (i = 0; i < MAX_COUNT; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
