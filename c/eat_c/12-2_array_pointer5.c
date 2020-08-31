// 배열과 포인터 5
#include <stdio.h>

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* parr = arr;

    printf("Sizeof(arr): %d\n", sizeof(arr));   // sizeof(arr)  -> 배열 arr의 전체 크기
    printf("Sizeof(parr): %d\n", sizeof(parr)); // sizeof(parr) -> 포인터 parr의 크기

	return 0;
}
