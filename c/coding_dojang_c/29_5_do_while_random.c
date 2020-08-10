#include <stdio.h>
#include <stdlib.h>     // srand, rand 함수가 선언된 헤더 파일
#include <time.h>       // time 함수가 선언된 헤더 파일

int main() {

    srand(time(NULL));  // 현재 시간값으로 시드 설정

    int i = 0;

    do {
        i = rand() % 10;    // rand 함수를 사용하여 무작위로 정수를 생성한뒤 10 미만의 숫자로 만듬
        printf("%d\n", i);
    } while (i != 3);      // i가 3이 아닐 때까지 반복

    return 0;
}
