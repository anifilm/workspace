// 순차 탐색 알고리즘과 이진 탐색 알고리즘의 비교
#include <stdio.h>

int BSearch(int arr[], int len, int target) {
    int first = 0;       // 탐색 대상의 시작 인덱스
    int last = len - 1;  // 탐색 대상의 마지막 인덱스
    int mid;
    int opCount = 0;     // 비교 연산 횟수를 기록

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
        opCount++;  // 비교 연산 횟수 증가
    }
    printf("비교연산 횟수: %d\n", opCount);  // 탐색실패 시 연산횟수 출력
    return -1;  // 찾지 못했을 때 반환되는 값 -1
}

int main() {

    int arr1[500] = {0,};    // 모든 요소를 0으로 초기화
    int arr2[5000] = {0,};   // 모든 요소를 0으로 초기화
    int arr3[50000] = {0,};  // 모든 요소를 0으로 초기화
    int idx;

    // 배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    // 배열 arr2을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    // 배열 arr3을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
    idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}
