// 관계 연산자 (<, >, ==, !=, <=, >=)
#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3;

    result1 = (num1 == num2);
    result2 = (num1 <= num2);
    result3 = (num1 > num2);

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);

    return 0;
}

/*

관계 연산자들은 '조건을 만족하면 1을, 만족하지 않으면 0을 반환'한다.

*/
