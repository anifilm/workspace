// 07 자연수 n을 입력 받은 후 1/n을 n번 더해서 출력하는 프로그램을 작성하라. 출력이 1이
// 아니면 왜 그런지 설명하라.
// > Enter the number of iteration:
// > 7 ([Enter])
// > 1/7 summed up 7 times is 0.9999999999999998
#include <stdio.h>

int main() {

    int num, i;
    double result;

    printf("Enter the number of iteration: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        result += 1.0 / num;

    printf("1/%d summed up %d times is %.16lf\n", num, num, result);

    return 0;
}
