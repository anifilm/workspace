// 구조체의 정의는 어디에 둘까요? 그런데 중복은 안됩니다.
#include <stdio.h>

typedef struct div {
    int quotient;   // 몫
    int remainder;  // 나머지
} Div;

extern Div IntDiv(int num1, int num2);

int main() {

    Div val = IntDiv(5, 2);
    printf("몫: %d\n", val.quotient);
    printf("나머지: %d\n", val.remainder);

    return 0;
}
