#include <stdio.h>
#include <stdlib.h>

void fcn() {
    printf("I am inside fcn.\n");
    exit(0);    // 프로그램 종료
}

int main() {

    fcn();
    printf("Back to main.\n");

    return 0;
}
