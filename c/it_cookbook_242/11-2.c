#include <stdio.h>
#define MAX 5

int main() {

    int i, sum, *p, arr[MAX] = {5, 10, 15, 20, 25};

    sum = 0;
    for (p = arr; p < &arr[MAX]; p++)
        sum += *p;
    printf("Sum is %d\n", sum);

    sum = 0;
    for (i = 0; i < MAX; i++)
        sum += *(arr + i);
    printf("Sum is %d\n", sum);

    sum = 0;
    p = arr;
    for (i = 0; i < MAX; i++)
        sum += p[i];
    printf("Sum is %d\n", sum);

    return 0;
}
