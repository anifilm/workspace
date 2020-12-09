// '형(Type)'이 존재하지 않는 void 포인터
#include <stdio.h>

void SoSimpleFunc() {
    printf("I'm so simple");
}

int main() {

    int num = 20;
    void* ptr;

    ptr = &num;     // 변수 num의 주소 값 저장
    printf("%p\n", ptr);

    ptr = (void*)SoSimpleFunc;  // 함수 SoSimpleFunc의 주소 값 저장
    printf("%p\n", ptr);

    return 0;
}
