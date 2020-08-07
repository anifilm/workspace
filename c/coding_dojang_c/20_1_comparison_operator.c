#include <stdio.h>

int main()
{
    int num1 = 10;

    printf("%d\n", num1 == 10);    // 1 (true): num1이 10과 같다?
    printf("%d\n", num1 != 5);     // 1 (true): num1이 5와 다르다?

    printf("%d\n", num1 > 10);     // 0 (false): num1이 10보다 크다?
    printf("%d\n", num1 < 10);     // 0 (false): num1이 10보다 작다?

    printf("%d\n", num1 >= 10);    // 1 (true): num1이 10보다 크거나 같다?
    printf("%d\n", num1 <= 10);    // 1 (true): num1이 10보다 작거나 같다?

    return 0;
}
