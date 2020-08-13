#include <stdio.h>

int main() {

    int numArr[5] = {1, 2, 3, 4, 5};
    int *numPtrA;
    int *numPtrB;
    int *numPtrC;

    numPtrA = numArr;       // 배열 첫번째 요소의 메모리 주소값을 포인터에 저장

    numPtrB = numPtrA + 1;  // 포인터 연산
    numPtrC = numPtrA + 2;  // 포인터 연산

    printf("numPtrA: %p -> %d\n", numPtrA, *numPtrA);
    printf("numPtrB: %p -> %d\n", numPtrB, *numPtrB);
    printf("numPtrC: %p -> %d\n", numPtrC, *numPtrC);

    return 0;
}
