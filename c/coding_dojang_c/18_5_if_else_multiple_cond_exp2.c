#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 20;

    if (num1 == 10) {
        if (num2 == 20) {    // if 조건문 안에 if 조건문이 들어감
            printf("true\n");
        } else {
            printf("false\n");
        }
    } else {
        printf("false\n");
    }
}
