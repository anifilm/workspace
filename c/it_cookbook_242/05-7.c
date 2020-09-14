#include <stdio.h>

int get_min(int, int, int);

int main() {

    int first, second, third;

    printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    printf("The minimum is %d.\n", get_min(first, second, third));

    return 0;
}

int get_min(int a, int b, int c) {
    if (a < b) {
        if (a < c)
            return a;
        else
            return c;
    } else {
        if (b < c)
            return b;
        else
            return c;
    }
}
