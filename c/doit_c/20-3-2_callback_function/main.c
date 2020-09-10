#include "sum.h"
#pragma comment(lib, "sum.lib")

// 정수 변수 값의 주소를 넘겨주면 해달 값이 음수이면 양수로 변환하는 함수
void MyAbsolute(int *p) {
    if (*p < 0) *p = (*p) * (-1);
}

int main() {

    int result = Sum(-3, -2, MyAbsolute, NULL);       // result에 값 1이 저장됨

    return 0;
}
