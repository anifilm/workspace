#include <stdio.h>

int* find_bigger(const int a, const int b) {
    int bigger;     // local variable return 오류 발생
    bigger = (a > b) ? a : b;
    return &bigger;
}

int main() {

    int first, second, max;

    printf("Enter two integers to compare.\n");
    scanf("%d %d", &first, &second);

    max = *(find_bigger(first, second));
    printf("The bigger one is, %d\n", max);

    return 0;
}

/*

지역 변수나 지역 변수를 가리키는 포인터를 호출 함수에 리턴하면 안 된다.

*/
