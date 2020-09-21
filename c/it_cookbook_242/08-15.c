#include <stdio.h>

void recurse(int n) {
    if (n == 0)
        return;
    else {
        printf("%d ", n);
        recurse(n - 1);
    }
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    recurse(num);

    return 0;
}
