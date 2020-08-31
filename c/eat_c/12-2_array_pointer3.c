// 배열과 포인터 3
#include <stdio.h>

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;

    parr = arr;     // parr = &arr[0]; 와 같음

    printf("arr[3] = %d , *(parr + 3) = %d \n", arr[3], *(parr + 3));

	return 0;
}
