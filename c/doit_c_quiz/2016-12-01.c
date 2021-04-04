// [Quiz] 정수를 오름차순으로 정렬하기
#include <stdio.h>

int main() {

    int data[7] = {6, 3, 9, 7, 2, 4, 1};
    int i, j, tmp = 0;

    // 정렬하기 전의 상태 값을 출력
    printf("before: %d", data[0]);
    for (i = 1; i < 7; i++)
        printf(", %d", data[i]);
    printf("\n");

    // 버블 정렬을 사용하여 data 배열의 값을 오름차순으로 정렬
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }

    // 오름차순 정렬 확인
    printf("after: %d", data[0]);
    for (i = 1; i < 7; i++)
        printf(", %d", data[i]);
    printf("\n");

    return 0;
}
