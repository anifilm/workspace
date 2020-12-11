#include <stdio.h>
#include <stdlib.h>

int main() {

    char str[20];

    printf("정수 입력: ");
    scanf("%s", str);

    printf("%d\n", atoi(str));

    printf("실수 입력: ");
    scanf("%s", str);

    printf("%g \n", atof(str));

    return 0;
}

/*

그 이외의 변환 함수들

int atoi(const char* str);      // 문자열의 내용을 int형으로 변환
long atol(const char* str);     // 문자열의 내용을 long형으로 변환
double atof(const char* str);   // 문자열의 내용을 double형으로 변환

*/
