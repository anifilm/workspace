// 03 다음 프로그램의 출력을 예측해 보고 프로그램을 실행해서 예측이 맞는지 확인하라.
#include <stdio.h>

int main() {

    char s[100] = "I am here.";
    char *t = "I am here.";
    (s == t) ? printf("yes.\n") : printf("no.\n");      // 메모리 주소값, 다르다
    (*s == *t) ? printf("yes.\n") : printf("no.\n");    // 포인터가 가리키는 주소에 저장된 첫번째 문자의 아스키값, 같다.

    return 0;
}
