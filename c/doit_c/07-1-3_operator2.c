#include <stdio.h>

void main() {

    int data1 = 5, data2 = 3;

    int result1 = data1 > 7;        // false
    int result2 = data2 <= data1;   // true
    int result3 = data2 == 7;       // false
    int result4 = data2 != data1;   // true

    printf("result: %d, %d, %d, %d\n", result1, result2, result3, result4);
}
