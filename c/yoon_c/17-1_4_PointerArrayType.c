// 포인터 배열과 포인터 배열의 포인터 형
#include <stdio.h>

int main() {

    int num1 = 10, num2 = 20, num3 = 30;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

    int* ptrArr[] = {ptr1, ptr2, ptr3};
    int** dptr = ptrArr;

    printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));

    printf("%d %d %d\n", *(*(ptrArr + 0)), *(*(ptrArr + 1)), *(*(ptrArr + 2)));
    printf("%d %d %d\n", *(*(dptr + 0)), *(*(dptr + 1)), *(*(dptr + 2)));

    return 0;
}

/*

13-1_3_ArrayNameIsPointer.c 의 내용 참조

    printf("%d %d\n", ptr[0], arr[0]);
    printf("%d %d\n", ptr[1], arr[1]);
    printf("%d %d\n", ptr[2], arr[2]);

    printf("%d %d\n", *(ptr + 0), *(arr + 0));
    printf("%d %d\n", *(ptr + 1), *(arr + 1));
    printf("%d %d\n", *(ptr + 2), *(arr + 2));

*/
