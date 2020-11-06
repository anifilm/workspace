// 08 키보드에서 입력한 모든 내용은 기본적으로 문자로 취급된다. 따라서 키보드에서 234라고
// 치면 그것은 '2','3','4'로 취급된다. 이를 scanf("%d") 형식으로 읽을 때 자동으로 호출
// 되는 함수가 atoi(alpha-numeric to integer) 함수다. 이는 문자 그대로 알파벳이나 숫자로
// 구성된 문자열을 숫자로 변환하는 함수다. atoi와 동일한 역할을 하는 my_atoi 함수를 작성
// 하고 검증하는 프로그램을 작성하라. 단, 입력은 gets(str)이나 scanf("%s", str); 형태로
// 읽어야 한다. %d 형식으로 읽으면 안된다. 이후 my_atoi 함수를 호출하여 그것을 정수로
// 변환한 뒤에 그 정수값을 출력해야 한다. "quit"가 입력될 때까지 실행을 반복한다.
// 힌트 음수가 들어올 수도 있으므로 일단 부호를 처리해야 한다. 이후 읽은 문자에서 '0'을
// 빼면 숫자가 된다. 따라서 '\0'이 들어오기 전까지 루프를 돌면서 이전 숫자에 10을 곱한 값
// 에 현재의 숫자를 더하면 된다.
// int my_atoi(const char* string);
// > Enter a number string.
// > -234 ([Enter])
// > The string you enter is integer -234
#include <stdio.h>
#include <string.h>

int my_atoi(const char* string) {
    int count = 0, num = 0, sign = 1;
    // 음수 부호 처리
    if (string[0] == '-') {
        count++;
        sign = -1;
    }
    while (string[count] != 0) {
        // 반복할 때마다 이전값에 10을 곱하여 자릿수를 증가시킴
        num = num * 10 + string[count] - '0';
        count++;
    }
    return sign * num;
}

int main() {

    char str[30];

    while (1) {
        printf("Enter a number string.\n");
        gets(str);
        if (strcmp(str, "quit") == 0) break;

        printf("The string you enter is integer %d\n", my_atoi(str));
    }

    return 0;
}
