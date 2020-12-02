/* 문제 02-2 [printf 함수의 다양한 활용]
문제 2
다음의 출력결과를 보이도록 예제를 작성해보자. 이번에도 역시 출력되는 숫자들은 서식문자 %d를
이용해서 출력하도록 하자.
  4 x 5 = 20
  7 x 9 = 63
*/
#include <stdio.h>

int main() {

    printf("%d x %d = %d\n", 4, 5, 20);
    printf("%d x %d = %d\n", 7, 9, 63);

    return 0;
}
