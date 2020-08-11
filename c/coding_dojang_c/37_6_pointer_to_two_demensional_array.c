#include <stdio.h>

int main() {

    int numArr[3][4] = {            // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*numPtr)[4] = numArr;      // int형 포인터를 선언하고 2차원 배열 numArr (주소값)을 할당

    printf("%p\n", *numArr);        // numArr, *numArr, &numArr 모두 동일하게 주소값을 출력함

    printf("%p\n", *numPtr);        // 2차원 배열의 포인터를 역참조하면 세로 첫번째 항목의 주소값을 출력

    printf("numPtr[2][1]: %d\n", numPtr[2][1]);   // 2차원 배열 포인터는 인덱스로 값에 접근 가능

    printf("sizeof(numArr): %d\n", sizeof(numArr));     // sizeof로 2차원 배열의 크기를 구혀면 배열의 메모리를 차지하는 공간을 출력

    printf("sizeof(numPtr): %d\n", sizeof(numPtr));     // sizeof로 2차원 배열 포인터의 크기를 구허면 포인터의 크기를 출력

    return 0;
}
