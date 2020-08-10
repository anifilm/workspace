#include <stdio.h>

int main() {

    int num1 = 10;
    char c1 = 'a';

    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    void *ptr;              // void 포인터 선언

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    ptr = numPtr1;                  // void 포인터에 int 포인터 저장
    // printf("ptr: %d\n", *ptr);   // void 포인터는 역참조할 수 없음. 컴파일 에러

    ptr = cPtr1;                    // void 포인터에 char 포인터 저장
    // printf("ptr: %c\n", *ptr);   // void 포인터는 역참조할 수 없음. 컴파일 에러


    return 0;
}
