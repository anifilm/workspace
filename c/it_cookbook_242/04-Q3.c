// 03 제곱을 구하는 함수를 두번 호출한 후 그 결과값을 더하여 a² + b² 을 구하라. 함수 원형은
// int square(int n); 로 한다.
#include <stdio.h>

int square(int n);

int main() {

    int a, b;

    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);

    printf("%d² + %d² = %d\n", a, b, square(a) + square(b));

    return 0;
}

int square(int n) {
    return n * n;
}
