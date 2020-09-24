#include <stdio.h>
#define MAX 4

void increment(int rb[]) {
    int i;
    for (i = 0; i < MAX; i++)
        rb[i]++;
}

int main() {

    int i, rabbit[MAX] = {10, 20, 30, 40};

    increment(rabbit);
    for (i = 0; i < MAX; i++)
        printf("%d ", rabbit[i]);
    printf("\n");

    return 0;
}
