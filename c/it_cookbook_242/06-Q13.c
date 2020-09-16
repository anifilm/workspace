// 13 자아도취 수(Narcissistic Number, Armstrong Number)는 각각의 자릿수에 총 자릿수의 승수를
// 취해 더한 숫자와 원래의 숫자가 동일한 경우를 말한다. 예를 들어, 153 = 1³ + 5³ + 3³,
// 1634 = 1⁴ + 6⁴ + 3⁴ + 4⁴ 이므로 자아도취 수다. 입력 숫자가 주어지면 그것이 자아도취 수인지를
// 판별하는 프로그램을 작성하라.
// 힌트 루프를 돌면서 몇 자리 수인지를 먼저 계산한 후 다시 루프를 돌면서 합을 구한다.
// int narciss(int n);  // returns 1 if narcissistic number
// > Enter a number:
// > 1634 ([Enter])
// > Yes, 1634 is a narcissistic number.
#include <stdio.h>
#include <math.h>

int power(int a, int b) {
    int i, result = 1;
    for (i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int narciss(int n) {
    int count = 0, sum = 0;
    int a = n, b = n;

    while (a) {
        a /= 10;
        count++;
    }

    while (b) {
        sum += power((b % 10), count);
        b /= 10;
    }

    if (n == sum)
        return 1;
    else
        return 0;
}

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (narciss(num) == 1)
        printf("\nYes, %d is a narcissistic number.\n", num);
    else
        printf("\nNo, %d is NOT a narcissistic number.\n", num);

    return 0;
}
