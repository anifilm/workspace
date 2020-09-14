// 06 C언어 표준 라이브러리에는 반올림 함수가 없는 대신 floor(3.14) = 3.000000, ceil(3.14)
// = 4.000000 식으로 floor(바닥) 함수와 ceil(ceiling, 천정) 함수를 제공한다. 이 함수들은
// double 형 인자를 받아서 double 형 리턴 값을 돌려준다. math.h 파일을 포함하면 이 함수들
// 을 불러다 쓸 수 있다. 양의 실수를 입력받은 후에 그것을 반올림한 정수를 돌려주는 함수를
// 만들고 main에서 그 결과를 확인하라.
// 힌트 입력 값에 0.5를 더한 뒤 floor 함수를 적용하면 반올림한 결과가 나온다. 이를 int 형
// 으로 변환해야 한다.
// double round_up(double n);
#include <stdio.h>
#include <math.h>

double round_up(double n);

int main() {

    double num;

    printf("Enter a positive real number: ");
    scanf("%lf", &num);

    printf("The round up value is %d\n", (int)round_up(num));

    return 0;
}

double round_up(double n) {
    return floor(n + 0.5);
}
