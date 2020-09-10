// 함수 포인터
#include <stdio.h>

int Sum(int a, int b) {
    int result = 0;
    result = a + b;
    return result;
}

int main() {

    int (*p)(int, int);         // Sum 함수를 가리킬 수 있는 함수 포인터를 선언
    p = &Sum;                   // Sum 함수의 주소를 p에 저장

    int result = (*p)(2, 3);    // int result = Sum(2, 3); 과 같으므로 result에는 5가 저장

    printf("result: %d\n", result);

    return 0;
}
