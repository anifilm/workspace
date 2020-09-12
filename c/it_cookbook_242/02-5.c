#include <stdio.h>

int main() {

    short width;
    int height;
    float area;
    double total;
    int length;
    short num1, num2, sum;

    width = (short)10;                  // short width
    height = 5;                         // int height
    area = 100.0f;                      // float area

    total = area + width * height;      // double total
    printf("Total is %lf\n", total);

    length = 3.14;                      // int length
    printf("Length is %d\n", length);

    length = (int)3.14;                 // int length
    printf("Length is %d\n", length);

    num1 = (short)10;
    num2 = (short)20;

    // short 자료형 num1 + num2 연산 도중 int형으로 계산이 진행된다
    printf("sizeof(num1 + num2) is %d byte\n", sizeof(num1 + num2));
    printf("sizeof('a' - 'A') is %d byte\n", sizeof('a' - 'A'));

    sum = num1 + num2;                  // short sum
    printf("sizeof sum is %d byte\n", sizeof(sum));

    return 0;
}
