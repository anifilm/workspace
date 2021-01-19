// 순차 탐색(Linear Search) 알고리즘과 시간 복잡도 분석의 핵심요소
#include <stdio.h>

// 순차 탐색 알고리즘 적용된 함수
int LSearch(int arr[], int len, int target) {
    int i;
    for (i = 0; i < len; i++) {
        if (arr[i] == target)
            return i;  // 찾은 대상의 인덱스 값 반환
    }
    return -1;  // 찾지 못했음을 의미하는 값 반환
}

int main() {

    int arr[] = {3, 5, 2, 4, 9};
    int idx;
    int len = sizeof(arr)/sizeof(int);

    idx = LSearch(arr, len, 4);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    idx = LSearch(arr, len, 7);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}
