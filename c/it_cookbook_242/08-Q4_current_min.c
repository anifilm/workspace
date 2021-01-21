/* 04
음의 정수가 들어오기 전까지 정수를 입력받되 입력을 받을 대마다 그 상태에서의 최소값을 출력하는 프로그램을
작성하라. 단, 프로그램은 루프를 돌면서 반드시 아래 함수를 호출해야 한다. 또, 이 함수는 함수 내에서 정적
변수 min을 선언하고 매번 호출될 때마다 이전에 저장된 min 값과 넘겨받은 n값을 비교해서 더 작은 값을 돌려
주어야 한다. 입력 정수의 크기는 100을 넘지 않는 것을 가정한다.
힌트 정적 변수 min을 100으로 초기화
  int current_min(int n);

  > Enter a number.
  > 50 ([Enter])
  > Current min is 50
  > Enter a number.
  > 30 ([Enter])
  > Current min is 30
*/
#include <stdio.h>

int current_min(int n) {
    static int min = 100;
    min = n;
    return min;
}

int main() {

    int num = 1;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num <= 0) break;
        printf("Current min is %d\n", current_min(num));
    }

    return 0;
}
