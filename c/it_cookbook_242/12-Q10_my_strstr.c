// 10 strstr 함수와 동일한 역할을 수행하는 my_strstr 함수를 완성하여 찾아낸 문자열을 포함
// 하여 그 이후의 모든 문자를 출력해 보라.
// > Enter string 1
// > There are many string searching algorithms. ([Enter])
// > Enter string 2
// > an ([Enter])
// > any string searching algorithms.
#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

char* my_strstr(const char* str1, const char*  str2) {
    const char *temp1 = str1, *temp2 = str2;
    int i, length = (int)strlen(str2);
    int matched = false;

    while (*str1 != '\0') {             // str1의 끝까지
        if (*temp1 == *temp2) {         // 첫문자가 같으면
            matched = true;             // 일단 matched를 참으로 놓고
            for (i = 0; i < length; i++) {  // i가 0부터 length까지 증가하면서
                if (*(temp1 + i) != *(temp2 + i)) {
                    // temp1 + i가 가리키는 것이 temp2 + i가 가리키는 것과 다르면
                    matched = false;    // matched는 거짓
                    break;              // 루프 밖으로
                }
            }
            if (matched == true)        // 초기화 값이 그대로 유지되었으면
                return (char*)temp1;   // temp1을 리턴
        }
        temp1++;    // 그렇지 않으면 temp1을 다음 문자로 이동
    }
    return NULL;    // 매칭이 없을 경우 리턴값은 NULL
}

int main() {

    char string1[100], string2[100], *position;

    while (1) {
        printf("Enter string 1\n");
        gets(string1);
        if (strcmp(string1, "quit") == 0) break;

        printf("Enter string 2\n");
        gets(string2);

        position = my_strstr(string1, string2);
        (position == NULL) ? printf("No such string.\n") : puts(position);
    }

    return 0;
}
