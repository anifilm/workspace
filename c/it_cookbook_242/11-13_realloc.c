#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int* p = (int*)malloc(sizeof(int) * 3);

    p[0] = 100;
    p[1] = 200;
    p[2] = 300;

    // malloc으로 동적 할당된 메모리 공간의 크기를 늘린 수 있다
    p = (int*)realloc(p, sizeof(int) * 5);
    if (p != NULL) {
        p[3] = 400;
        p[4] = 500;
    }
    for (i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\n");

    return 0;
}
