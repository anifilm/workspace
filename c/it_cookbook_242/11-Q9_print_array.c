// 09 %s 형식으로 문자열을 입력받아 정적 배열에 저장하고 아래 함수를 써서 그것을 거꾸로 출력
// 하라. 단, 이 함수는 재귀 함수인 동시에 포인터 산술 연산을 써서 구현해야 한다.
// 힌트 %c 형식으로 출력하되 일단 arr + (length - 1)이 가리키는 것을 찍고 length를 1만큼
// 감소시켜 재귀 호출을 한다. length가 줄고 줄어 베이스 케이스에 도달한다.
// void print_array(char *arr, int length);
#include <stdio.h>

void print_array(char *arr, int length) {
    if (length == -1) {
        return;
    } else {
        printf("%c", *(arr + (length - 1)));
        print_array(arr, length - 1);
    }
}

int main() {

    int i;
    char ch, string[100];

    printf("Enter string.\n");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        string[i] = ch;
    string[i] = '\0';

    print_array(string, i);
    printf("\n");

    return 0;
}
