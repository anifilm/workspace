/* 문제 14-1 [Call-by-value & Call-by-reference]
문제 2
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해 보자. 예를 들어서 함수의 이름이
Swap3라 하면, 다음 형태로 함수가 호출되어야 한다.
  Swap(&num1, &num2, &num3);

그리고 함수 호출릐 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에,
그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/
#include <stdio.h>

void Swap3(int* p_num1, int* p_num2, int* p_num3) {
    int temp = *p_num3;
    *p_num3 = *p_num2;
    *p_num2 = *p_num1;
    *p_num1 = temp;
}

int main() {

    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    Swap3(&num1, &num2, &num3);
    printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);

    return 0;
}
