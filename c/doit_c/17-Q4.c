// Q4 다음 프로그램은 return 문을 사용하지 않고 GetMyData 함수에서 동적 할당한 메모리의 주소를
// main 함수의 지역 변수에 받아오는 프로그램입니다. 빈칸에 코드를 채워 프로그램을 완성하세요.
#include <stdio.h>
#include <malloc.h>

void GetMyData(int **q) {
    // 할당된 주소 값을 포인터 q가 가리키는 main 함수의 p에 저장함
    *q = (int *)malloc(40);
}

int main() {

    int *p;

    GetMyData(&p);
    *p = 5;

    free(p);

    return 0;
}
