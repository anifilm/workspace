/* 21
2진수를 10진수로 변환하는 프로그램을 작성하라. 단, main은 입력 2진수를 long long 타입의 10진수로 선언
하고 scanf("%lld") 형식으로 읽어야 한다. 이후 아래 함수를 호출해야 한다.
이 함수 내부에서 math.h에 선언된 double pow(double x, double y); 를 써서 x의 y승을 계산하되 결과 값을
int 타입으로 변환해야 한다.
힌트 2진수를 10으로 나눈 나머지에 자리 수에 해당하는 2의 승수를 곱하되 루프를 돌면서 계속 더해야 한다.
  int bin_to_dec(long long n);

  > Enter a binary number.
  > 11010000 ([Enter])
  > The decimal value of binary 11010000 is 208.
*/
#include <stdio.h>
#include <math.h>

int bin_to_dec(long long n) {
    int num,  m = 0, i = 0;
    while (n > 0) {
        num = n % 10;
        n /= 10;
        m = m + (num * (int)pow(2, i));
        i++;
    }
    return m;
}

int main() {

    long long int number;
    int result;

    printf("Enter a binary number.\n");
    scanf("%lld", &number);

    result = bin_to_dec(number);
    printf("The decimal value of binary %lld is %d.", number, result);

    return 0;
}
