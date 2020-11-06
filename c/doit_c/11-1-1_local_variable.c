// 변수의 사용 범위에 따른 유효성 이해하기
#include <stdio.h>

int Sum(int data1, int data2) {
    int result = data1 + data2;
    return result;
}

int main() {

    int result;

    result = Sum(5, 3);
    printf("5 + 3 = %d\n", result);

    return 0;
}
