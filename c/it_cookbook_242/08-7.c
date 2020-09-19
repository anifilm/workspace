#include <stdio.h>

int a; double b; char c;
// 전역 변수 선언시 자동으로 0으로 초기화

int main() {

    static int d;   // 정적 변수 또한 변수 선언시 자동으로 0으로 초기화
    int e;          // 일반 변수 선언시 초기화 하지 않고 사용하게 되는 경우 쓰레기 값을 출력
    printf("%d, %lf, %x, %d\n", a, b, c, d);
    printf("%d\n", e);

    return 0;
}
