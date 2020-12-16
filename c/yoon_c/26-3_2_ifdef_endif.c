// #ifdef... #endif: 정의되었다면
#include <stdio.h>

// #define ADD  1
#define MIN  0

int main() {

    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

// 매크로 ADD는 주석 처리되어 정의 되어있지 않으므로 실행되지 않는다.
#ifdef ADD
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

// 매크로 MIN은 정의되어 있으므로 실행된다.
#ifdef MIN
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif

    return 0;
}
