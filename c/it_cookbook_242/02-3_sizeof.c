#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("sizeof(char) is %d byte\n", sizeof(char));
    printf("sizeof(short) is %d byte\n", sizeof(short));
    printf("sizeof(int) is %d byte\n", sizeof(int));
    printf("sizeof(long) is %d byte\n", sizeof(long));
    printf("sizeof(long long) is %d byte\n", sizeof(long long));
    printf("sizeof(float) is %d byte\n", sizeof(float));
    printf("sizeof(double) is %d byte\n", sizeof(double));
    printf("sizeof(long double) is %d byte\n", sizeof(long double));
    printf("\n");

    printf("int ranges from %d to %d\n", INT_MIN, INT_MAX);
    printf("double ranges from %e to %e\n", DBL_MIN, DBL_MAX);

    return 0;
}
