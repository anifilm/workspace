/* 15
행과 열 수를 입력받아 동적 배열을 만들고 배열 데이터를 입력받아 그것을 제곱한 값을 출력하는 프로그램을 작성하라.
  > Enter row and column.
  > 3 2 ([Enter])
  > Enter the value of array elements.
  > 1 2 3 4 5 6 ([Enter])
  > The result is
  > 1      4
  > 9      16
  > 25     36
*/
#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int, int);
void destroy_matrix(int**, int);

int main() {

    int row, column, i, j, **matrix;

    printf("Enter row and column.\n");
    scanf("%d %d", &row, &column);

    matrix = create_matrix(row, column);

    printf("Enter the value of array elements.\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &matrix[i][j]);

    printf("The result is, \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++)
            printf("%d\t", matrix[i][j] * matrix[i][j]);
        printf("\n");
    }
    destroy_matrix(matrix, row);

    return 0;
}

int** create_matrix(int row, int col) {
    int i, **p;
    p = (int**)malloc(sizeof(int*) * row);
    if (p == NULL)
        exit(1);
    for (i = 0; i < row; i++) {
        p[i] = (int*)malloc(sizeof(int) * col);
        if (p[i] == NULL)
            exit(1);
    }
    return p;
}

void destroy_matrix(int** p, int row) {
    int i;
    for (i = 0; i < row; i++)
        free(p[i]);
    free(p);
    p = NULL;
}
