// 07 strcmp 함수와 동일한 역할을 하는 my_strcmp 함수를 작성하라. 또, main에서 이를 불러
// 입력받은 두 개의 문자열 크기를 비교하여 출력하는 프로그램을 작성하라. 단, 이 프로그램은
// "quit"가 입력될 때까지 실행을 반복한다.
// int my_strcmp(const char *str1, const char *str2);
// > Enter string 1
// > add ([Enter])
// > Enter string 2
// > addition ([Enter])
// > Result of strcmp(str1, str2) is -1
// > Enter string 1
// > quit
#include <stdio.h>
#include <string.h>

int my_strcmp(const char *str1, const char *str2) {
    if (strlen(str1) > strlen(str2))
        return 1;
    else if (strlen(str1) < strlen(str2))
        return -1;
    else
        return 0;
}

int main() {

    char string1[30], string2[30];

    while (1) {
        printf("Enter string 1\n");
        gets(string1);
        if (strcmp(string1, "quit") == 0) break;
        printf("Enter string 2\n");
        gets(string2);
        if (strcmp(string2, "quit") == 0) break;

        printf("Result of strcmp(str1, str2) is %d\n", my_strcmp(string1, string2));
    }


    return 0;
}
