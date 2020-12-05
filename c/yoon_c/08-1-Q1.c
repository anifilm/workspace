/* 문제 08-1 [if~else문의 활용]
문제 1
1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을 작성해 보자.
단! 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
*/
#include <stdio.h>

int main() {

    int num;

    for (num = 1; num < 100; num++) {
        if (num % 7 == 0 && num % 9 == 0)
            printf("7의 배수이면서 동시에 9의 배수인 정수: %d\n", num);
        else if (num % 7 == 0)
            printf("7의 배수: %d\n", num);
        else if (num % 9 == 0)
            printf("9의 배수: %d\n", num);
    }

    return 0;
}
