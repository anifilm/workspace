// 버블 정렬 (Bubble Sort)
#include <stdio.h>

void BubbleSort(int arr[], int n) {
    int i, j;
    int temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 데이터의 교환
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[5] = {5, 3, 2, 4, 1};
    int len = sizeof(arr) / sizeof(int);

    BubbleSort(arr, len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
