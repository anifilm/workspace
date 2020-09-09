// 1분 퀴즈
// 18-4 8바이트로 '구조체 멤버 정렬'이 설정되어 있을 때, 다음 구조체 선언을 어떻게
// 바꾸면 더 효율적일까요?
/*
struct Test {
    char a;
    double b;
    short c;
    char d;
    int e;
};  // struct Test is: 24 byte
*/

#include <stdio.h>
#include <malloc.h>

struct Test {
    char a;
    char d;
    short c;
    int e;
    double b;
};  // struct Test is: 16 byte

int main() {

    struct Test *p = (struct Test *)malloc(sizeof(struct Test));

    printf("struct Test is: %d byte\n", sizeof(*p));

	return 0;
}
