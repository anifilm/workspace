#include <stdio.h>

/*

int *const p;
포인터의 주소값(address) 변경을 하지 못하도록 한다.

const int *p;
포인터의 값(value)을 변경하지 못하도록 한다.

*/

void Swap(int *const pa,  int *const pb) {

    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void main() {

    int start = 96, end = 5;

    printf("before: start = %d, end = %d\n", start, end);

    if (start > end) {
        Swap(&start, &end);     // 각 변수의 주소값을 함수에 전달
    }

    printf("after: start = %d, end = %d\n", start, end);
}
