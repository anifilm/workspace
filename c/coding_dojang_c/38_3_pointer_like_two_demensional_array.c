#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

int main() {

    int **numPtr2 = malloc(sizeof(int *) * 3);      // 이중 포인터에 (int 포인터 크기 * 세로크기) 만큼 동적 메모리 할당
                                                    // 배열의 세로
    for (int i = 0; i < 3; i++) {                   // 세로 크기만큼 반복
        numPtr2[i] = malloc(sizeof(int) * 4);       // (int 크기 * 가로 크기) 만큼 동적 메모리 할당
    }                                               // 배열의 가로

    numPtr2[0][0] = 1;      // 세로 인덱스 0, 가로 인덱스 0인 요소에 값 할당
    numPtr2[2][0] = 5;      // 세로 인덱스 2, 가로 인덱스 0인 요소에 값 할당
    numPtr2[2][3] = 2;      // 세로 인덱스 2, 가로 인덱스 3인 요소에 값 할당

    printf("numPtr[0][0]: %d\n", numPtr2[0][0]);    // 배열처럼 인덱스로 접근하여 값 출력
    printf("numPtr[2][0]: %d\n", numPtr2[2][0]);    // 배열처럼 인덱스로 접근하여 값 출력
    printf("numPtr[2][3]: %d\n", numPtr2[2][3]);    // 배열처럼 인덱스로 접근하여 값 출력

    for (int i = 0; i < 3; i++) {       // 세로 크기만큼 반복
        free(numPtr2[i]);               // 2차원 배열의 가로 공간 메모리 해제
    }

    free(numPtr2);       // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}
