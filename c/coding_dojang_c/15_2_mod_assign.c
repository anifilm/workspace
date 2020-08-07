#include <stdio.h>

int main()
{
    int num = 7;

    num %= 2;           // num에 2를 나눈 뒤 나머지를 구하여 다시 num에 저장

    printf("num: %d\n", num);    // 1

    return 0;
}
