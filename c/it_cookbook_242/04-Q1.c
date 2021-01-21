/* 01
두 정수를 입력받아 첫번째 정수가 두번째 정수보다 크거나 같으면 1을, 그렇지 않으면 0을 되돌려주는 함수를 작성하고
main에서 그 함수를 불러 결과를 출력하는 프로그램을 작성하라. 함수 원형은 int is_larger(int f, int s);로 한다.
힌트 논리 연산의 결과는 1이나 0이고 그것을 함수 리턴 값으로 돌려준다.
  > Enter two intergers.
  > 3 3 ([Enter])
  > Result is 1.
*/
#include <stdio.h>

int is_larger(int f, int s);

int main() {

    int f, s, result;

    printf("Enter two intergers: ");
    scanf("%d %d", &f, &s);

    result = is_larger(f, s);
    printf("Result is %d\n", result);

    return 0;
}

int is_larger(int f, int s) {
    return f >= s;
}
