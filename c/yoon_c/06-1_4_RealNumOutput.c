// 실수의 출력을 위한 서식문자들: %f, %e, %g
#include <stdio.h>

int main(void)
{
    printf("%f\n", 0.1234);
    printf("%e\n", 0.1234);     // e 표기법 기반의 출력

    printf("%f\n", 0.12345678);
    printf("%e\n", 0.12345678); // e 표기법 기반의 출력

    return 0;
}
