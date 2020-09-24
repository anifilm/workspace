// 05 n factorial을 계산하는 아래 재귀 함수를 작성하라. 단, 이 함수로부터 되돌아온 후 main에서
// p가 가리키는 값을 출력하면 그것이 n factorial 값이어야 한다.
// 힌트 main에서 결과 값을 저장할 result 변수를 1로 초기화하고 함수 호출 시 result를 가리키는
// 포인터 ptr을 p로 넘겨준다.
// void factorial(int n, int *p);
#include <stdio.h>

// TODO void 로 변경 필요
int factorial(int n, int *p) {
    if (n == 1) {
        *p = 1;
        return *p;
    } else {
        *p = n * factorial(n - 1, p);
        return *p;
    }
}

int main() {

    int num, result = 1, *ptr;
    ptr = &result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    factorial(num, ptr);
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}
