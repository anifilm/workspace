#include <stdio.h>
#include <stdlib.h>

int main() {

    int last = 0;
    char ch, *p;
    p = (char *)malloc(sizeof(char));
    if (p == NULL)
        exit(1);

    printf("Enter a character string.\n");
    while (1) {
        if ((ch = getchar()) == '\n')
            break;
        else {
            *(p + last) = ch;
            last++;
            p = (char *)realloc(p, sizeof(char) * (last + 1));
            if (p == NULL)
                exit(1);
        }
    }
    // %s형식으로 문자열 배열을 출력하려면 문자열 끝에 반드시 널문자('\0')를 붙여야 한다
    *(p + last) = '\0';
    printf("%s\n", p);

    free(p);

    return 0;
}
