/* 02
섭씨 온도를 C라고 했을 때 그에 해당하는 화씨 온도 F는 f = (9 / 5)C + 32로 표시된다. 섭씨를 화씨로 바꾸어 출력
하는 프로그램을 작성하되 정수 버전으로 작성하라.
힌트 (9 / 5)C 를 어떻게 표현하느냐에 따라 결과가 달라진다. 이를 (9 / 5 * C)로 표현하면 결과는 항상 C가 된다.
곱하는 순서를 바꾸어야 정밀도가 높아진다.
  > Enter degrees in Celius.
  > 16 ([Enter])
  > 16 degrees in Celcius is 60 degrees in Fahrenheit.
*/
#include <stdio.h>

int main() {

    int c, f;

    printf("Enter degrees in Celius: ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;
    printf("%d degrees in Celcius is %d degrees in Fahrenheit.\n", c, f);

    return 0;
}
