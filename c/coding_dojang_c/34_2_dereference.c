/*
포인터 변수에는 메모리 주소가 저장되어 있습니다. 이때 메모리 주소가 있는 곳으로 이동해서 값을 가져오고 싶다면
역참조(dereference) 연산자 * (asterist)를 사용합니다.

*포인터

*/

#include <stdio.h>

int main() {

    int num = 10;   // int형 변수를 선언하고 10 할당
    int *numPtr;    // 포인터 변수 선언

    numPtr = &num;  // num의 메모리 주소를 포인터 변수에 할당

    printf("numPtr -> num value: %d\n", *numPtr);      // 역참조 연산자로 num의 메모리 주소에 접근하여 값을 가져옴

    return 0;
}
