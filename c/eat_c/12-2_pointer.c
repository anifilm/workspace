// 포인터의 대입
#include <stdio.h>

int main() {

    int a;
    int *pa = &a;   // 포인터 pa를 선언하고 변수 a의 주소값을 대입
    int *pb;        // 포인터 pb를 선언

    *pa = 3;        // 포인터 pa가 가리키는 주소값(변수 a)에 값 3을 대입
    pb = pa;        // 포인터 pb에 pa를 대입, pa가 가리키는 주소값이 대입 된다.

    printf("pa 가 가리키고 있는 것: %d\n", *pa);
    printf("pb 가 가리키고 있는 것: %d\n", *pb);

    return 0;
}
