/* 도전! 프로그래밍 2
도전 1


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int a;
    int b;
} structC;

typedef struct {
    structC* arr2;
} structB;

typedef struct {
    structB* arr;
} structA;

int main() {

    structA* ptr;

    ptr = (structA*)malloc(sizeof(structA));

    ptr->arr = (structB*)malloc(sizeof(structB) * 10);
    memset(ptr->arr, 0, sizeof(structB) * 10);

    for (int i = 0; i < 10; i++) {
        ptr->arr[i].arr2 = (structC*)malloc(sizeof(structC) * 10);
        memset(ptr->arr[i].arr2, 0, sizeof(structC) * 10);
    }

    ptr->arr[0].arr2[0].a = 1;
    ptr->arr[0].arr2[0].b = 2;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            printf("%d %d\n", ptr->arr[i].arr2[j].a, ptr->arr[i].arr2[j].b);

    return 0;
}
