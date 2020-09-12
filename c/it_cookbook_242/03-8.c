#include <stdio.h>

int main() {

    int a = 10, b = 5;
    double p = 10.0, q = 5.02, r = 10.00000000000000001;

    printf("%d\n", a > b);
    printf("%d\n", a >= b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);

    printf("%d\n", p > q);
    printf("%d\n", p == r);

	return 0;
}
