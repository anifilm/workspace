// 다양한 종류의 함수 정의하기
#include <stdio.h>

int NumberCompare(int num1, int num2);

int main() {

    printf("3과 4중에서 큰 수는 %d이다.\n", NumberCompare(3, 4));
    printf("7과 2중에서 큰 수는 %d이다.\n", NumberCompare(7, 2));

    return 0;
}

int NumberCompare(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
