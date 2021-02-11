/* 01
아래 함수를 호출하여 입력 정수의 절대값을 계산하는 프로그램을 작성하라. 단, 함수 내부에서 3항 연산자를 써야 한다.
입출력 형식은 자유로이 할 수 있다.
  int abs(int num);

*/
#include <stdio.h>

int abs(int num) {
    return (num > 0) ? num : -(num);
}

int main() {

    int number;

    printf("Enter an interger: ");
    scanf("%d", &number);

    printf("The absolute value is %d\n", abs(number));

    return 0;
}
