// 이진 탐색 알고리즘의 재귀적 구현
#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target) {
    int mid;

    if (first > last)
        return -1;             // 찾지 못했을 때 반환되는 값 -1
    mid = (first + last) / 2;  // 탐색 대상의 중앙값을 찾는다.

    if (arr[mid] == target)    // 탐색 대상을 찾았다면
        return mid;            // 탐색 완료
    else if (target < arr[mid])
        return BSearchRecur(arr, first, mid-1, target);
    else
        return BSearchRecur(arr, mid+1, last, target);
}

int main() {

    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    int len = sizeof(arr)/sizeof(int);

    idx = BSearchRecur(arr, 0, len-1, 7);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    idx = BSearchRecur(arr, 0, len-1, 4);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);


    return 0;
}
