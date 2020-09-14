#include <stdio.h>

void compare(int n1, int n2) {
    if (n1 > n2)
        printf("First is larger.\n");
    else if (n1 < n2)
        printf("Second is larger.\n");
    else
        printf("They are equal.\n");
    return;
}

int main() {

    int first, second;
    printf("Enter two integers: \n");
    scanf("%d %d", &first, &second);

    compare(first, second);

    return 0;
}
