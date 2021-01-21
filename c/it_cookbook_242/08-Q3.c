/* 03
a, b, c가 인자로 전달되었을 때 아래 함수를 호출해서는 동시에 최소 및 최대의 값을 리턴 받을 수 없다.
함수의 리턴 값은 항상 하나이기 때문이다. 이에 대한 대안으로서 이 함수의 리턴 타입을 void로 만들고
전역 변수를 사용하도록 변형해 볼 수 있다. main에서 세 개의 정수를 입력받은 후 변형된 함수를 호출하여
최소와 최대를 출력하는 프로그램을 작성하라.
  int min_max(int a, int b, int c);

  > Enter three integers.
  > 2 2 5 ([Enter])
  > min is 2, max is 5
*/
#include <stdio.h>

int min, max;  // 전역 변수

void min_max(int a, int b, int c) {
    // find min value
    if (a < b) {
        if (a < c)
            min = a;
        else
            min = c;
    } else {
        if (b < c)
            min = b;
        else
            min = c;
    }
    // find max value
    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;
    }
    return;
}

int main() {

    int first, second, third;

    printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    min_max(first, second, third);
    printf("min is %d, max is %d", min, max);

    return 0;
}
