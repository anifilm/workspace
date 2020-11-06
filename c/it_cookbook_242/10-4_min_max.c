#include <stdio.h>

void min_max(int a, int b, int* min, int* max) {
    if (a < b) {
        *min = a;
        *max = b;
    } else {
        *min = b;
        *max = a;
    }
}

int main() {

    int first, second, smaller, larger;

    printf("Enter two different integers: ");
    scanf("%d %d", &first, &second);

    min_max(first, second, &smaller, &larger);
    printf("Smaller: %d, Larger: %d", smaller, larger);

    return 0;
}
