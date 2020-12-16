// 구조체의 정의는 어디에 둘까요? (헤더파일 추가)
#include <stdio.h>
#include "stdiv.h"

extern Div IntDiv(int num1, int num2);

int main() {

    Div val = IntDiv(5, 2);
    printf("몫: %d\n", val.quotient);
    printf("나머지: %d\n", val.remainder);

    return 0;
}
