// #if... #endif: 참이라면
#include <stdio.h>

#define ADD  1
#define MIN  0

int main() {

    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

// ADD는 'True'이므로 실행 된다. (#define ADD 1)
#if ADD
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

// MIN은 'False'이므로 실행되지 않는다. (#define MIN 0)
#if MIN
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif

    return 0;
}
