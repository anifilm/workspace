#include <stdio.h>

int main() {

    char c1 = 'a';          // 변수에 문자 'a' 할당
    //   ↑ 변수 안에 'a'가 그대로 할당됨

    //            ↓ 메모리에 저장되어 있음 (읽기 전용)
    char *s1 = "Hello";     // 포인터에 문자열 "Hello"의 주소값 할당
    //    ↑ 문자열 리터럴이 있는 곳의 메모리 주소값을 할당

    printf("%p -> ", &c1);      // %p 문자가 저장된 메모리 주소 출력
    printf("c1: %c\n", c1);     // %c 문자 출력

    printf("%p -> ", s1);       // %p 문자열이 저장된 메모리 주소 출력
    printf("s1: %s\n", s1);     // %s 문자열 출력

    return 0;
}
