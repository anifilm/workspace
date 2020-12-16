// 조건부 컴파일을 활용한 중복 삽입 문제의 해결
#include <stdio.h>
#include "stdiv.h"  // 구조체 선언 헤더 파일
#include "intdiv.h"

int main() {

    Div val = IntDiv(5, 2);
    printf("몫: %d\n", val.quotient);
    printf("나머지: %d\n", val.remainder);

    return 0;
}
