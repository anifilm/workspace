#include <stdio.h>

int* larger(int *a, int *b) {
    if (*a > *b)
        return a;
    else
        return b;
}

int main() {

    int first, second, *p;

    printf("Enter two different integers: ");
    scanf("%d %d", &first, &second);

    p = larger(&first, &second);
    printf("%d is larger.\n", *p);

    return 0;
}
