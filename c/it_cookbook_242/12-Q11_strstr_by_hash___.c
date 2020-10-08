// 11 문자열 탐색 알고리즘 중 하나인 Rabin-Karp 알고리즘은 문자열을 숫자로 변환하여 탐색
// 하는 방법이다. 예를 들어 abcdfkg라는 텍스트에서 cdf를 찾는다고 생각해 보자. 그 경우
// cdf = 'c' * 100 + 'd' * 10 + 'i' = 63 * 100 + 64 * 10 + 66 = 7006 이라는 계산에
// 의해 숫자로 바꿀 수 있다. 숫자로 변환하고자 하는 문자열을 해시 키(Hash Key)라고 부르고,
// 해시 키를 숫자로 변환하는 함수를 해시 함수(Hash Function)라 부른다. 텍스트 abcdfkg를
// 세 문자 단위로 숫자로 바꾸면 처음 abc = 'a' * 100 + 'b' * 10 + 'c' 가 되어 찾고자
// 하는 7006이 아님을 알 수 있다. 이후 차례로 bcd, cdf 순으로 가면서 숫자가 일치하는지
// 확인할 수 있다. 단, 숫자가 일치하더라도 문자열이 일치하는지는 다시 확인해야 한다.
// 문자열은 일치하지 않지만 해시 함수를 적용한 결과 같은 수가 나올 수도 있기 때문이다.
// 텍스트와 검색 문자열을 입력받아 배열에 저장한 후 Rabin-Karp 알고리즘을 적용하여 해당
// 문자열이 텍스트에 존재하면 그 문자열부터 이후 문자를 모두 출력하고 존재하지 않으면
// "No such string."이라고 출력하는 프로그램을 작성하라.
// char* strstr_by_hash(const char *str1, const char *str2);
// > Enter text.
// > In thes days, everything gets polarized. ([Enter])
// > Enter search string.
// > thing ([Enter])
// > thing gets polarized.
#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

char* strstr_by_hash(const char *str1, const char *str2) {
    // TODO 수정필요
    const char *temp1 = str1, *temp2 = str2;
    int i, length = (int)strlen(str2);
    int matched = false;

    while (*str1 != '\0') {             // str1의 끝까지
        if (*temp1 == *temp2) {         // 첫문자가 같으면
            matched = true;             // 일단 matched를 참으로 놓고
            for (i = 0; i < length - 1; i++) {  // i가 0부터 length - 1까지 증가하면서
                if (*(temp1 + i) != *(temp2 + i)) {
                    // temp1 + i가 가리키는 것이 temp2 + i가 가리키는 것과 다르면
                    matched = false;    // matched는 거짓
                    break;              // 루프 밖으로
                }
            }
            if (matched == true)        // 초기화 값이 그대로 유지되었으면
                return (char *)temp1;   // temp1을 리턴
        }
        temp1++;    // 그렇지 않으면 temp1을 다음 문자로 이동
    }
    return NULL;    // 매칭이 없을 경우 리턴값은 NULL
}

int main() {

    char string1[100], string2[100], *position;

    while (1) {
        printf("Enter text.\n");
        gets(string1);
        if (strcmp(string1, "quit") == 0) break;

        printf("Enter search string.\n");
        gets(string2);

        position = strstr_by_hash(string1, string2);
        (position == NULL) ? printf("No such string.\n") : puts(position);
    }

    return 0;
}
