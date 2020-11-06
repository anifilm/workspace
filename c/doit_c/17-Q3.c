// Q3 char data[2][3]; 과 같은 용도로 사용할 수 있도록 2차원 포인터 변수 p와 malloc 함수를 사용하여
// 코드를 구성해 보세요.
#include <stdio.h>
#include <malloc.h>

int main() {

    char** p;
    int i;

    p = (char**)malloc(sizeof(char*) * 2);

    for (i = 0; i < 2; i++) {
        *(p + i) = (char*)malloc(sizeof(char) * 3);
    }

    for (i = 0; i < 2; i++) free(*(p + i));

    free(p);

    return 0;
}
