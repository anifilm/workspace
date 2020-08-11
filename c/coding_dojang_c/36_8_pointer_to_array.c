#include <stdio.h>

int main() {

    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // 배열을 생성하고 값 할당

    int *numPtr = numArr;   // 포인터에 int형 배열을 할당, numArr 이나 &numArr의 결과가 같다, 둘다 주소값

    printf("numPtr: %p\n", numPtr);     // 포인터에 할당된 주소값을 출력 (numArr의 주소값)
    printf("*numPtr -> numArr[0]: %d\n", *numPtr);    // 배열의 주소가 들어있는 포인터를 역참조하여 배열의 첫번째 요소를 출력

    printf("numArr: %p\n", numArr);     // numArr 배열의 주소값을 출력
    printf("*numArr -> numArr[0]: %d\n", *numArr);    // 배열 자체를 역참조하여도 배열의 첫번째 요소를 출력 할수 있다

    printf("numPtr[5]: %d\n", numPtr[5]);             // 배열의 주소가 들어있는 포인터는 인덱스로 접근 가능

    printf("sizeof(numArr): %d\n", sizeof(numArr));   // 40 -> sizeof로 배열의 크기를 구하면 배열이 메모리를 차지하는 공간을 출력
    printf("sizeof(numPtr): %d\n", sizeof(numPtr));   // 8  -> sizeof로 배열의 주소값이 할당된 포인터의 크기를 구하면 포인터의 크기를 출력

    return 0;
}
