// 헤더 파일과 cpp 파일로 분리하기
#include "Adder.h"

Adder::Adder(int a, int b) {
    op1 = a;
    op2 = b;
}

int Adder::process() {
    return op1 + op2;
}
