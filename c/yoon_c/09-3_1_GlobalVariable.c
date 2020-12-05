// 전역 변수의 이해와 선언방법
#include <stdio.h>

void Add(int val);
int num;    // 전역 변수는 기본값 0으로 초기화 됨

int main() {

    printf("num: %d\n", num);

    Add(3);
    printf("num: %d\n", num);

    num++;  // 전역 변수 num의 값 1 증가
    printf("num: %d\n", num);

    return 0;
}

void Add(int val) {
    num += val; // 젼역 변수 num의 값 val만큼 증가
}

/*

전역 변수의 특징

프로그램 시작과 동시에 메모리상의 데이터(data) 영역에 저장되여 종료 시까지 존재한다.
직접 초기화 하지 않아도 0으로 자동 초기화 된다.
프로그램 전체 영역 어디서든 접근이 가능하다.

*/
