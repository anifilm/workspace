/* 문제 08-2 [continue & break의 활용]
문제2
다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.
*/
#include <stdio.h>

int main() {

    int num1, num2;

    for (num1 = 1; num1 < 10; num1++) {
        for (num2 = 1; num2 < 10; num2++) {
            if (num1 == num2) continue;
            if ((num1 * 10 + num2) + (num2 * 10 + num1) == 99) {
                printf("   %d %d\n", num1, num2);
                printf(" + %d %d\n", num2, num1);
                printf("--------\n");
                printf("   %d %d\n", 9, 9);
            }
        }
        printf("\n");
    }

    return 0;
}
