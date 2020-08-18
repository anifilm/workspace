// 논리 연산자를 사용하여 연산하기
#include <stdio.h>

int main() {

    int data1 = 5, data2 = 3;

    int result1 = 0 || 1;                       // true
    int result2 = 3 && -1;                      // true
    int result3 = data1 == 3 || data2 == 3;     // true
    int result4 = data1 == 3 && data2 == 3;     // false
    int result5 = !data1;                       // false

    printf("result: %d, %d, %d, %d, %d\n", result1, result2, result3, result4, result5);

	return 0;
}
