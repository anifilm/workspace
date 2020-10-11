// 01 main에서 아래 함수를 호출한 후에 리턴되는 구조체 변수를 받아서 각 멤버 변수의 값을 출력
// 해 보라. 단, addition에는 a + b, subtraction에는 a - b, multiplication에는 a * b를 저장
// 해야 한다.
// calcType calc_all(int a, int b);
#include <stdio.h>

typedef struct {
    int addition;
    int subtraction;
    int multiplication;
} calcType;

calcType calc_all(int a, int b) {
    calcType result;
    result.addition = a + b;
    result.subtraction = a - b;
    result.multiplication = a * b;
    return result;
}

int main() {

    int first, second;
    calcType value;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    value = calc_all(first, second);
    printf("\n");
    printf("addition(%d, %d): %d\n", first, second, value.addition);
    printf("subtraction(%d, %d): %d\n", first, second, value.subtraction);
    printf("multiplication(%d, %d): %d\n", first, second, value.multiplication);

    return 0;
}
