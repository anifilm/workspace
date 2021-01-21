/* 07
실수를 입력받은 후에 형 변환 연산자를 써서 입력받은 값을 정수형으로 변환하여 출력하라.
  > Enter a real number.
  > 88.99999 ([Enter])
  > 88
*/
#include <stdio.h>

int main() {

    double num;

    printf("Enter a real number.\n");
    scanf("%lf", &num);

    printf("%d\n", (int)num);

    return 0;
}
