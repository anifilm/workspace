// 2차원 포인터를 사용하여 일반 변수의 값 대입하기
#include <stdio.h>

int main() {

    short data = 3;
    short *p = &data;       // data 변수의 주소값을 1차원 포인터 p에 저장함
    short **pp = &p;        // 1차원 포인터 p변수의 주소값을 2차원 포인터 pp에 저장함

    printf("[Before   ] data: %d\n", data);
    *p = 4;     // 1차원 포인터 p를 사용하여 data 변수값을 4로 수정
    printf("[Use *p   ] data: %d\n", data);
    **pp = 5;   // 2차원 포인터 pp를 사용하여 data 변수값을 5로 수정
    printf("[Use **pp ] data: %d\n", data);

    return 0;
}
