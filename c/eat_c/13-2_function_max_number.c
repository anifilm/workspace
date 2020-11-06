// 입력받은 배열의 10개의 원소들 중 최대값을 출력
#include <stdio.h>

int max_number(int* parr);

int main() {

    int arr[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d번째 원소를 입력하세요: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("입력한 원소 중 가장 큰수는 %d 입니다.\n", max_number(arr));

    return 0;
}

int max_number(int* parr) {
    int i;
    int max = parr[0];
    for (i = 1; i < 5; i++) {
        if (parr[i] > max)
            max = parr[i];
    }
    return max;
}
