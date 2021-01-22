#include <stdio.h>

int main() {

    float area; double total;
    area = 0.1234567;
    printf("Area is %f\n", area);
    total = 0.1234567;
    printf("Total is %lf\n", total);
    total = 0.1234567f;  // float (4 byte) -> Type Casting to double
    printf("Total is %lf\n", total);

    return 0;
}
