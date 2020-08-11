#include <stdio.h>

int main() {

    int numArr[3][4] = {            // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int row = sizeof(numArr) / sizeof(numArr[0]);       // 2차원 배열의 세로 크기를 구할 때
                                                        // 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
    int col = sizeof(numArr[0]) / sizeof(numArr[0][0]); // 2차원 배열의 가로 크기를 구할 때
    //  col = sizeof(numArr[0]) / sizeof(int));  // 가능,  가로 한줄의 크기를 요소의 크기로 나눠줌

    for (int i = 0; i < row; i++) {              // 2차원 배열의 세로 크기만큼 반복
        for (int j = 0; j < col; j++) {          // 2차원 배열의 가로 크기만큼 반복
            printf("numArr[%d][%d]: %d \t", i, j, numArr[i][j]);   // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
        }
        printf("\n");                            // 가로 요소를 출력한 뒤 다음 줄로 넘어감
    }

    return 0;
}
