#include <stdio.h>
#include <stdlib.h>

void MergeTwoArea(int arr[], int left, int mid, int right) {
    int fIdx = left;
    int rIdx = mid + 1;
    int i;

    // 병합 한 결과를 담을 배열 sortArr의 동적 할당
    int* sortArr = (int*)malloc(sizeof(int) * (right + 1));
    int sIdx = left;

    // 병합 할 두 영역의 데이터들을 비교하여 정렬 순서대로 sortArr에 하나씩 옮겨 담는다.
    while (fIdx <= mid && rIdx <= right) {
        if (arr[fIdx] <= arr[rIdx])
            sortArr[sIdx] = arr[fIdx++];
        else
            sortArr[sIdx] = arr[rIdx++];

        sIdx++;
    }

    if (fIdx > mid) {  // 배열의 앞부부분이 모두 sortArr에 옮겨졌다면,
        for (i = rIdx; i <= right; i++, sIdx++)  // 배열의 뒷부분에 남은 데이터들을 sortArr에 그대로 옮긴다.
            sortArr[sIdx] = arr[i];
    }
    else {  // 배열의 뒷부분이 모두 sortArr에 옮겨졌다면,
        for (i = fIdx; i <= mid; i++, sIdx++)  // 배열의 앞부분에 남은 데이터들을 sortArr에 그대로 옮긴다.
            sortArr[sIdx] = arr[i];
    }

    for (i = left; i <= right; i++)
        arr[i] = sortArr[i];

    free(sortArr);
}

void MergeSort(int arr[], int left, int right) {
    int mid;

    if (left < right) {  // left가 작다면 더 나눌 수 있다.
        // 중간 지점을 계산
        mid = (left + right) / 2;

        // 둘로 나눠서 각각을 정렬
        MergeSort(arr, left, mid);  // left ~ mid에 위치한 데이터 정렬
        MergeSort(arr, mid + 1, right);  // mid+1 ~ right에 위치한 데이터 정렬

        // 정렬된 두 배열을 병합
        MergeTwoArea(arr, left, mid, right);
    }
}

int main() {

    int arr[7] = {3, 2, 4, 1, 7, 6, 5};
    int len = sizeof(arr) / sizeof(int);

    MergeSort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
