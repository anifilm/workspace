// 12 %s 형식으로 문자열을 입력받아 정적 배열에 저장하고 아래 함수를 써서 그것을 거꾸로 출력
// 하는 프로그램을 작성하라. 여기서 arr은 배열 시작 주소이며 length는 배열 요소의 개수다. 단,
// 이 함수는 반드시 포인터 산술 연산을 써서 구현해야 한다.
// 힌트 i를 length - 1로 초기화 한 후 i를 감소시키면서 (arr + i)가 가리키는 것을 찍는다.
// void print_array(char *arr, int length);
// > Enter a sentence.
// > Amore Roma
// > amoR eromA
#include <stdio.h>

void print_array(char *arr, int length) {
    for (int i = length - 1; i >= 0; i--)
        printf("%c", *(arr + i));
    printf("\n");
}

int main() {

    char strings[100];
    int len = 0;

    printf("Enter a sentence.\n");
    scanf("%s", strings);
    // 입력 받은 문자열의 길이를 구함
    while (1) {
        if (strings[len] == '\0') break;
        len++;
    }

    print_array(strings, len);

    return 0;
}
