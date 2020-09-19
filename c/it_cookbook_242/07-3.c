#include <stdio.h>

void fcn() {
    printf("I am inside fcn.\n");
    return;     // 함수 종료
}

int main() {

    fcn();
    printf("Back to main.\n");

    return 0;
}
