// 2차원 포인터로 8바이트의 동적 메모리를 할당하는 함수 만들기
#include <stdio.h>
#include <malloc.h>

void GetMyData(int **q) {         // 포인터 변수 q는 p 변수의 주소값을 저장
    *q = (int *)malloc(8);  // 할당된 메모리의 주소값을 포인터 q가 가리티는 main 함수의 p에 저장
}

int main() {

    int *p;         // p는 초기화되지 않아서 쓰레기 (유효하지 않은) 값을 저장
    GetMyData(&p);  // 포인터 변수 p의 주소값을 매개변수로 전달
    *p = 5;         // 할당된 메모리의 첫 4바이트에 값 5를 넣음
    free(p);        // 동적으로 할당된 메모리를 해제함

    return 0;
}
