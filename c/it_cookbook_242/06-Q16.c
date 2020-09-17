// 16 키보드에서 입력한 모든 숫자는 문자로 읽힌다. 예를 들어, 숫자 23을 치더라도 그것은 문자 '2', '3'
// 으로 읽힌다. stdlib.h에 선언된 atoi(alphanumeric to integer) 함수는 문자열을 숫자로 변환하는
// 함수다. 따라서 scanf가 %d 형식으로 읽을 때 이 함수가 자동으로 호출되어 23이라는 숫자로 변환된다.
// atoi 함수의 신세를 지는 대신 직접 짤 수도 있다. main에서 루프를 돌면서 scanf("%c", &ch);를 써서
// 숫자를 개별 문자 형태로 읽은 후 그것을 정수로 변환하여 출력하는 것이다. 빈줄을 채워 이 프로그램을
// 완성해 보라.
#include <stdio.h>

int main() {

    char ch;
    int sum = 0;
    int value;                      // 문자 하나를 0..9 사이의 숫자로 변환하여 저장하는 변수

    printf("Enter a natural number: ");
    while (1) {
        scanf("%c", &ch);
        if (ch == '\n') break;      // ch가 엔터키('\n')와 같으면 빠져 나감
        value = ch - '0';           // value 값 설정. 아스키 값 48('0')이 숫자 0
        sum = sum * 10 + value;     // sum 값 설정. 이전 sum에 10을 곱한 후 value를 더함
    }
    printf("You entered %d in decimal.\n", sum);

    return 0;
}
