// 지역 변수에 static 선언을 추가해서 만드는 정적(static) 변수
#include <stdio.h>

void SimpleFunc() {
    static int num1 = 0;    // 정적 변수, 초기화하지 않으면 0으로 초기화 됨
    int num2 = 0;           // 지역 변수, 초기화하지 않으면 쓰레기 값을 가짐
    num1++, num2++;
    printf("static: %d, local: %d\n",num1, num2);
}

int main() {

    int i;

    for(i = 0; i < 3; i++)
        SimpleFunc();

    return 0;
}

/*

지역 변수의 static 선언 (정적 변수)

전역 변수와 성격이 같다.
프로그램 시작과 동시에 메모리상의 데이터(data) 영역에 저장되여 종료 시까지 존재한다.
직접 초기화 하지 않아도 0으로 자동 초기화 된다.

이렇게 선언된 정적 변수는 지역 변수처럼 SimpleFunc() 함수 내에서만 접근이 가능하다.

*/
