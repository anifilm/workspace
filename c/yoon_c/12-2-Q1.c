/* 문제 12-1 [포인터의 이해]
문제 1
아래의 예제 실행 시 변수와 포인터 변수의 관계를 그림을 그려서 설명해 보자. 또한 출력의
결과도 예상해 보자.
*/
#include <stdio.h>

int main() {

    int num = 10;
    int* ptr1 = &num;
    int* ptr2 = ptr1;

    (*ptr1)++;  // num: 11
    (*ptr2)++;  // num: 12

    printf("%d\n", num);    // 12

    return 0;
}
