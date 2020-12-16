// 특별한 매크로 연산자 없이 단순히 연결하는 것은 불가능합니다.
#include <stdio.h>

// #define STNUM(Y, S, P)  YSP
// #define STNUM(Y, S, P)  Y S P
#define STNUM(Y, S, P)  ((Y) * 100000 + (S) * 1000 + (P))
#define STNUM2(Y, S, P) Y ## S ## P

int main() {

    printf("학번: %d\n", STNUM(10, 65, 175));  // 1065175
    printf("학번: %d\n", STNUM(10, 65, 075));  // 1065061 (매크로에 정의된 계산이 적합하지 않다.)
    printf("학번: %d\n", STNUM2(10, 65, 075)); // 1065075 (매크로의 ## 연산자에 의해 숫자를 형태대로 연결하여 출력)

    return 0;
}

/*

필요한 형태대로 단순하게 결합하기: 매크로 ## 연산자

#define CON(UPP, LOW)  UPP ## 00 ## LOW

int num = CON(22, 77);
    -> 22 ## 00 ## 77 -> 220077

*/
