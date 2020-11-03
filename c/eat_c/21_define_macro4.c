// 매크로 함수 4 (변수의 이름 출력하기)
#include <stdio.h>
#define PrintVariableName(var) printf(#var "\n");

int main() {

    int number;
    PrintVariableName(number);

    return 0;
}
