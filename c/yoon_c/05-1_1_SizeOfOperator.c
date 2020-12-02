// 연산자 sizeof를 이용하면 자료형의 크기를 확인할 수 있습니다.
#include <stdio.h>

int main() {

    char ch = 9;
    int iNum = 1052;
    double dNum = 3.1415;

    printf("변수 ch의 크기: %d\n", sizeof(ch));
    printf("변수 iNum의 크기: %d\n", sizeof(iNum));
    printf("변수 dNum의 크기: %d\n", sizeof(dNum));
    printf("\n");

    printf("char의 크기: %d\n", sizeof(char));
    printf("int의 크기: %d\n", sizeof(int));
    printf("long의 크기: %d\n", sizeof(long));
    printf("long long의 크기: %d\n", sizeof(long long));
    printf("float의 크기: %d\n", sizeof(float));
    printf("double의 크기: %d\n", sizeof(double));

    return 0;
}
