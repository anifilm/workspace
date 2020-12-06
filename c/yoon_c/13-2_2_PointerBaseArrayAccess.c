// 포인터를 대상으로 하는 증가 및 감소 연산
#include <stdio.h>

int main() {

    int arr[3] = {11, 22, 33};
    int* ptr = arr;    // int* ptr = &arr[0]; 과 동일한 문장

    printf("%d %d %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2));

    printf("%d ", *ptr);  ptr++;
    printf("%d ", *ptr);  ptr++;
    printf("%d ", *ptr);  ptr--;
    printf("%d ", *ptr);  ptr--;
    printf("%d ", *ptr);  printf("\n");

    return 0;
}
