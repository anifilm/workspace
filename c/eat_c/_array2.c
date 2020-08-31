#include <stdio.h>

int main() {

    int arr_col_len, arr_row_len;

    int arr[3][4] = {
        {10, 20, 30, 40},
        {30, 40, 50, 60},
        {1, 2, 70, 80}
    };

    arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);
    arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);

    // 2차원 배열의 출력
    for (int i = 0; i < arr_row_len; i++) {
        for (int j = 0; j < arr_col_len; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

	return 0;
}
