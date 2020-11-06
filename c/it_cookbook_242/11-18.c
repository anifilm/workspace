#include <stdio.h>
#include <stdlib.h>

void print_it(int p[2][3]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            p[i][j] = i * i + j * j;
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int* arr = (int*)malloc(sizeof(int) * 2 * 3);
    if (arr != NULL)
        print_it(arr);

    free(arr);
    arr = NULL;

    return 0;
}
