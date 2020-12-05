/* 문제 09-1 [다양한 함수 정의하기]
문제 1
세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환
하는 함수를 정의해보자. 그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
*/
#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {

    int num1, num2, num3;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("가장 큰 수: %d\n", max3(num1, num2, num3));
    printf("가장 작은 수: %d\n", min3(num1, num2, num3));

    return 0;
}
