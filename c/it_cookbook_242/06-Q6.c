// 06 자연수 a, b에 대해 a의 b 제곱을 돌려주는 함수를 작성하되 for loop을 사용해서 작성하라.
// 또, main에서 이 함수를 호출하여 결과를 출력하라.
// int power(int a, int b)
// > Enter base and power:
// > 2 7 ([Enter])
// > 2 to the power of 7 is 128
#include <stdio.h>

int power(int a, int b) {
    int i, result = 1;
    for (i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {

    int base, pow;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &pow);

    printf("%d to the power of %d is %d", base, pow, power(base, pow));

    return 0;
}
