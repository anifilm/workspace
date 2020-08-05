#include <stdio.h>

int Sum(int data1, int data2) {

    int result = data1 + data2;
    return result;
}

void main() {

    int result;

    result = Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}
