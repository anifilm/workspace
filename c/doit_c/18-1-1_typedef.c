// typedef로 정의한 자료형으로 변수 선언하기
#include <stdio.h>

// unsigned short int형을 US라는 새로운 이름으로 정의
typedef unsigned short int US;

int main() {

    unsigned short int data = 5;
    US temp;    // unsigned short int temp; 와 같음

    temp = data;
    printf("temp = %d\n", temp);

    return 0;
}
