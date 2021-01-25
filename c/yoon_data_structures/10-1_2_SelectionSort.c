// 선택 정렬 (Selection Sort)
#include <stdio.h>

void SelSort(int arr[], int n) {
    int i, j;
    int maxIdx;
    int temp;

    for (i = 0; i < n - 1; i++) {
        maxIdx = i;
        for (j = i + 1; j < n; j++) {  // 최소값 탐색
            if (arr[j] < arr[maxIdx])
                maxIdx = j;
        }
        // 교환
        temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main() {

    int arr[5] = {5, 3, 2, 4, 1};
    int len = sizeof(arr) / sizeof(int);

    SelSort(arr, len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
