// 이진 탐색(Binary Search) 알고리즘의 구현
#include <stdio.h>

int BSearch(int arr[], int len, int target) {
    int first = 0;       // 탐색 대상의 시작 인덱스
    int last = len - 1;  // 탐색 대상의 마지막 인덱스
    int mid;

    while (first <= last) {
        mid = (first + last) / 2;  // 탐색 대상의 중앙값을 찾는다.
        if (target == arr[mid])    // 탐색 대상을 찾았다면
            return mid;  // 탐색 완료
        else {           // 탐색 대상을 찾지 못했다면 대상을 절반으로 줄인다.
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;  // 찾지 못했을 때 반환되는 값 -1
}

int main() {

    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    int len = sizeof(arr)/sizeof(int);

    idx = BSearch(arr, len, 7);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    idx = BSearch(arr, len, 4);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);


    return 0;
}
