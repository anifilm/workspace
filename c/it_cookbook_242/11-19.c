#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int, int);
void destroy_matrix(int**, int);

int main() {

    int row, column, i, j, **matrix;

    printf("Enter row and column.\n");
    scanf("%d %d", &row, &column);

    matrix = create_matrix(row, column);

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            matrix[i][j] = i * i + j * j;
            printf("%d\t", matrix[i][j]);
        }
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
