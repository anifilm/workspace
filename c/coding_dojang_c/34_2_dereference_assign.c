/*
포인터 변수에는 메모리 주소가 저장되어 있습니다. 이때 메모리 주소가 있는 곳으로 이동해서 값을 가져오고 싶다면
역참조(dereference) 연산자 * (asterist)를 사용합니다.

*포인터

포인터 변수에 역참조 연산자를 사용한 뒤 값을 할당 하는 경우

* 포인터 = 값;

*/

#include <stdio.h>

int main() {

    int num = 10;   // int형 변수를 선언하고 10 할당
    int *numPtr;    // 포인터 변수 선언

    numPtr = &num;  // num의 메모리 주소를 포인터 변수에 할당

    *numPtr = 20;   // 역참조 연산자로 메모리 주소에 접근하여 20을 재할당

    printf("numPtr -> num value: %d\n", *numPtr);      // 역참조 연산자로 num의 메모리 주소에 접근하여 값을 가져옴
    printf("num: %d\n", num);   // num 값도 변경됨

    return 0;
}
