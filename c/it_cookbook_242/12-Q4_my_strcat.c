// 04 strcat 함수와 동일한 역할을 수행하는 my_strcat 함수를 작성하라. 여기서 dest가 가리키는
// 공간을 src 문자열을 이어붙이기에 충분하다고 가정한다. main에서 두 개의 문자열을 입력받은 후,
// 이 함수를 호출하여 결과를 출력하는 프로그램을 작성하라. 단, 이 프로그램은 dest 문자열에
// "quit"가 입력될 때까지 실행을 반복한다.
// 힌트 실행을 반복하려면 main에서 루프를 돌되 if (strcmp(dest, "quit") == 0) break;에 의해
// 빠져나온다.
// char* my_strcat(char* dest, char* src);
// > Enter destination string.
// > bla ([Enter])
// > Enter source string.
// > bla ([Enter])
// > blabla
// > Enter destination string.
// > quit ([Enter])
#include <stdio.h>
#include <string.h>

char* my_strcat(char* dest, char* src) {
    int i = (int)strlen(dest), j = 0;
    while ((dest[i] = src[j]) != '\0') {
        i++;
        j++;
    }
    return dest;
}

int main() {

    char source[30];
    char destination[100];

    while (1) {
        printf("Enter destination string.\n");
        gets(destination);
        if (strcmp(destination, "quit") == 0) break;
        printf("Enter source string.\n");
        gets(source);

        printf("%s\n", my_strcat(destination, source));
    }

    return 0;
}
