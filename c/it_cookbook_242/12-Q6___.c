// 06 문자열 내부의 특정 문자열을 다른 문자열로 대체하는 프로그램을 작성하라. 단, 대체할 문자열
// 의 길이는 원래 문자열의 길이와 같다고 가정한다. 또, 바꿀 문자열이 없으면 NULL을 리턴해서
// 원래 문장 그대로 출력해야 한다.
// 힌트 리턴 값이 NULL이 아닐 때까지 루프를 돌면서 strstr(str, from)을 호출하여 교체할 위치를
// 찾아낸 다음에 strlen(from)의 길이만큼 문자 단위로 복사한다.
// void change_str(char *str, const char *to, const char *from);
// > Enter a string.
// > This winter is so cold compared with the previous winters.
// > from string.
// > winter ([Enter])
// > to string.
// > summer ([Enter])
// > This summer is so cold compared with the previous summers.
#include <stdio.h>
#include <string.h>

void change_str(char *str, const char *to, const char *from) {

}

int main() {

    char string[30], from[10], to[10];

    printf("Enter a string.\n");
    gets(string);
    printf("from string.\n");
    gets(from);
    printf("to string.\n");
    gets(to);

    change_str(string, to, from);
    printf("%s\n", string);

    return 0;
}
