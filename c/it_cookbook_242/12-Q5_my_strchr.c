// 05 strchr 함수와 동일한 역할을 수행하는 my_strchr 함수를 작성하라. 단, 입력 문장에 해당
// 문자가 없으면 NULL을 리턴해야 한다. main에서 이 함수를 불러서, 찾아낸 문자 이후의 모든
// 문자를 출력해 보라. 찾는 문자가 없으면 "No such character."라고 출력하라. 단, 프로그램은
// "quit"가 입력될 때까지 실행을 반복한다.
// char* my_strchr(const char *str, int c);
// > Enter source string.
// > http://university.academy.korea ([Enter])
// > Enter character to be searched.
// > . ([Enter])
// > academy.korea
// > Enter source string.
#include <stdio.h>
#include <string.h>

char* my_strchr(const char *str, int c) {
    for ( ; *str != (char)c; ++str)
        if (*str == '\0')
            return NULL;
    return (char *)str;
}

int main() {

    char source[30], ch;

    while (1) {
        printf("Enter source string.\n");
        gets(source);
        if (strcmp(source, "quit") == 0) break;
        printf("Enter character to be searched.\n");
        scanf("%c", &ch);
        while (getchar() != '\n');

        if (my_strchr(source, ch) == NULL)
            printf("No such character.\n");
        else
            printf("%s\n", my_strchr(source, ch));
    }

    return 0;
}
