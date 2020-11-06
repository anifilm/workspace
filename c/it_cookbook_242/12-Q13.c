// 13 아래 my_strcpy 함수를 재귀 호출에 의해 구현하라. main에서 gets로 입력을 받아 src 배열
// 을 채운 뒤 이 함수를 호출하고 main으로 되돌아와서 puts로 dest 배열을 출력하라. 단, dest
// 배열의 크기를 src 배열과 동일한 크기라고 가정한다.
// 힌트 index는 현재 복사해야 할 문자의 인덱스를 뜻한다. 따라서 src[index]가 '\0'이면 문자열
// 의 끝이므로 그것을 복사한 후 곧바로 빠져나와야 한다. 그렇지 않으면 복사 후에 index를 증가
// 시켜 재귀 호출을 계속 해야 한다.
// char* my_strcpy(char* dest, const char* src, int index);
#include <stdio.h>
#include <string.h>

char* my_strcpy(char* dest, const char* src, int index) {
    if (src[index] == '\0')
        return dest;
    else {
        dest[index] = src[index];
        return my_strcpy(dest, src, ++index);
    }
}

int main() {

    char dest[30], src[30];

    printf("Enter destination string.\n");
    gets(dest);
    printf("Enter source string.\n");
    gets(src);

    printf("On my_strcpy(dest, src), dest became %s.\n", my_strcpy(dest, src, 0));

    return 0;
}
