// malloc 함수를 사용하여 2차원 포인터 구조 만들기
#include <stdio.h>
#include <malloc.h>

int main() {

    short** pp;
    pp = (short**)malloc(sizeof(short *));     // 4바이트를 할당, 두번째 상자를 만듬
    *pp = (short*)malloc(sizeof(short));       // 2바이트를 할당, 세번째 상자를 만듬

    **pp = 10;      // 2차원 포인터를 사용하여 세번째 상자에 10에 대입
    printf("**pp: %d\n", **pp);

    free(*pp);      // 세번째 상자에 해당하는 메모리를 해제함
    free(pp);       // 두번째 상자에 해당하는 메모리를 해제함

    return 0;
}
