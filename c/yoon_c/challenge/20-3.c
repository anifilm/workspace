/* 도전! 프로그래밍 3
도전 3
프로그램을 구현하다 보면 난수(Random Number)를 발생시켜야 하는 경우가 종종 있다.
여기서 말하는 난수란 임의의, 정해지지 않은, 무엇이 될지 모르는 수를 의미한다. 그런데
다행인 것은 ANSI 표준에서 나수를 생성할 때 호출할 수 있는 다음 함수를 제공하고 있다는
것이다.
  #include <stdlib.h>
  int rand(void);   // 의사 난수(pseudo-random number)를 반환

ANSI 표준에서는 이렇게 난수를 생성할 때 사용할 수 있는 함수 rand를 제공하고 있다.
이 함수의 사용방법은 다음과 같다.
  20-3_RandomNum.c 파일 참조

그럼 이어서 문제를 제시하겠다. 위의 예제에서는 0 이상 RAND_MAX 이하의 난수를 총 5개
생성하고 있다. 이 예제를 적절히 변경해서 0 이상 99 이하의 난수를 총 5개 생성하는
프로그램을 작성해 보자.
(힌트: % 연산자를 적절히 활요하면 된다)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i;
    srand((int)time(NULL));

    printf("난수의 범위: 0부터 %d까지\n\n", 99);
    for (i = 0; i < 5; i++)
        printf("난수 출력: %d\n", rand() % 100);

    return 0;
}
