// scanf 총 정리
#include <stdio.h>

int main() {

    // 문자
    char ch;

    // 정수
    short sh;
    int i;
    long lo;

    // 실수
    float fl;
    double du;

    printf("char 형 변수 입력: ");
    scanf("%c", &ch);

    printf("short 형 변수 입력: ");
    scanf("%hd", &sh);
    printf("int 형 변수 입력: ");
    scanf("%d", &i);
    printf("long 형 변수 입력: ");
    scanf("%ld", &lo);

    printf("float 형 변수 입력: ");
    scanf("%f", &fl);
    printf("double 형 변수 입력: ");
    scanf("%lf", &du);

    printf("char: %c , short: %d , int: %d ", ch, sh, i);
    printf("long: %ld , float: %f, double: %f \n", lo, fl, du);

    return 0;
}
