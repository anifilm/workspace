// 01 a, b를 더해 *p에 저장하는 함수를 작성한 후에 main에서 이 함수를 호출하여 결과를 출력
// 하는 프로그램을 작성하라.
// 힌트 main에서 일단 sum 변수와 그것을 가리키는 포인터 변수 ptr을 선언한 후 함수 호출 시
// ptr을 p로 넘겨준다.
// void add(const int a, const int b, int *p);
#include <stdio.h>

void add(const int a, const int b, int *p) {
    *p = a + b;
}

int main() {

    int first, second, sum, *ptr;
    ptr = &sum;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    add(first, second, ptr);
    printf("sum is %d\n", *ptr);

    return 0;
}
