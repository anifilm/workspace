/*
변수의 메모리 주소를 구해보았는데 메모리 주소는 어디에 저장해야 할까요?
C언어에서 메모리 주소는 포인터 (pointer) 변수에 저장합니다.
다음가 같이 포인터 변수는 * (asterrisk)를 사용하여 선언합니다. (포인터 변수는 포인터로 줄여서 부르기도 합니다.)

자료형 *포인터이름;
포인터 = &변수;

32비트와 64비트 포인터 크기
32비트: 16진수 8자리  4바이트 (0x 0000 0000)
64비트: 16진수 16자리 8바이트 (0x 0000 0000 0000 0000)

*/

#include <stdio.h>

int main() {

    int num = 10;   // int형 변수를 선언하고 10 할당
    int *numPtr;    // 포인터 변수 선언

    numPtr = &num;  // num의 메모리 주소를 포인터 변수에 할당

    printf("num address: %p\n", &num);                  // num의 메모리 주소를 출력
    printf("numPtr -> num address: %p\n", numPtr);      // 포인터 변수 numPtr의 값 출력

    return 0;
}
