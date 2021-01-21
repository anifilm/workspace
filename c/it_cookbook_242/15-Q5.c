/* 05
두 정수의 합을 구하는 다음 프로그램을 완성하라.
*/
#include <stdio.h>

int add_numbers(int x, int y) {
    return x + y;
}

int main() {

    int a = 10, b = 20, sum;
    int(*fp)(int, int);         // add_numbers 함수를 가리키는 함수 포인터 선언
    fp = add_numbers;           // 함수 포인터에 위 함수명을 대입
    sum = fp(a, b);             // 함수 포인터에 의해 함수를 호출하되 a, b를 전달
    printf("sum is: %d\n", sum);

    return 0;
}
