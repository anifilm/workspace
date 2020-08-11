#include <stdio.h>

int main() {

    int numArr[3][4] = {            // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("sizeof(numArr): %d\n", sizeof(numArr));     // 4바이트 크기의 요소가 12 (3 x 4)개 -> 48

    int row = sizeof(numArr) / sizeof(numArr[0]);       // 2차원 배열의 세로 크기를 구할 때
                                                        // 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
    int col = sizeof(numArr[0]) / sizeof(numArr[0][0]); // 2차원 배열의 가로 크기를 구할 때
    //  col = sizeof(numArr[0]) / sizeof(int));  // 가능,  가로 한줄의 크기를 요소의 크기로 나눠줌

    printf("row: %d\n", row);   // 3
    printf("col: %d\n", col);   // 4

    return 0;
}
