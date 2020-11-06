// 03 다음 프로그램의 출력을 예측하고 실제로 프로그램을 실행하여 예측한 값이 맞는지 확인하라.
#include <stdio.h>

void f1(int* p) { *p = 30; }
void f2(int p) { p = 40; }
void f3(int* arr) {
    int* p = arr;
    printf("%d\n", *p);         // 1
    printf("%d\n", *(p + 3));   // 7
}

int main() {

    int m = 10, list[] = {1, 3, 5, 7};
    f1(&m);
    printf("%d\n", m);  // 30
    f2(m);
    printf("%d\n", m);  // 30
    f3(list);

    return 0;
}
