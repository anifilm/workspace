/* 문제 04-4 [비트연산의 이해]
문제 2
다음 연산의 결과를 출력하는 프로그램을 작성해보자. 단, * 연산자와 / 연산자를 사용하지
않고 구현해야 한다.
  3 x 8 ÷ 4
물론 중간과정을 생략하거나 적절히 암산하지 않고, 반드시 곱셈에 대응하는 연산과 나눗셈에
대응하는 연산을 거져서 해결해야 한다.
*/
#include <stdio.h>

int main() {

    int num1 = 3, num2 = 8, num3 = 4;
    int result;

//  result = num1 * num2 / num3;
    result = (num1 << 3) >> 2;

    printf("%d x %d ÷ %d = %d\n", num1, num2, num3, result);

    return 0;
}
