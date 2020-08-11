#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

int main() {

    int row, col;

    printf("2차원 배열의 크기를 입력하세요: (ex >> 3 4) >> ");
    scanf("%d %d", &row, &col);
    printf("\n");

    int **numPtr2 = malloc(sizeof(int *) * row);      // 이중 포인터에 (int 포인터 크기 * row(세로크기)) 만큼 동적 메모리 할당
                                                      // 배열의 세로
    for (int i = 0; i < row; i++) {                   // 세로 크기만큼 반복
        numPtr2[i] = malloc(sizeof(int) * col);       // (int 크기 * col(가로 크기)) 만큼 동적 메모리 할당
    }                                                 // 배열의 가로

    for (int i = 0; i < row; i++) {         // 세로 크기만큼 반복
        for (int j = 0; j < col; j++) {     // 가로 크기만큼 반복
            numPtr2[i][j] = i + j;          // 2차원 배열의 각 요소에 i + j 값을 할당
        }
    }

    for (int i = 0; i < row; i++) {         // 세로 크기만큼 반복
        for (int j = 0; j < col; j++) {     // 가로 크기만큼 반복
            printf("numPtr2[%d][%d]: %d \t", i, j, numPtr2[i][j]); // 2차원 배열의 인덱스에 반복문의 변수 i, j 를 지정
        }
        printf("\n");       // 가로 요소를 출력한 뒤 다음 줄로 넘어감
    }

    for (int i = 0; i < 3; i++) {       // 세로 크기만큼 반복
        free(numPtr2[i]);               // 2차원 배열의 가로 공간 메모리 해제
    }

    free(numPtr2);       // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}
