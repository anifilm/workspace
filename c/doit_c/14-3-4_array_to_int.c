#include <stdio.h>

int ArrayToInterger(char string[]) {
    int count = 0, num = 0;
    while (string[count] != 0) {
        // 반복할 때마다 이전값에 10을 곱하여 자릿수를 증가시킴
        num = num * 10 + string[count] - '0';
        count++;
    }
    return num;
}

void main() {

    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number: ");
    gets(first_string);     // 첫번째 문자열을 입력 받음
    printf("input second number: ");
    gets(second_string);    // 두번째 문자열을 입력 받음

    first_num = ArrayToInterger(first_string);      // 문자열 -> 정수
    second_num = ArrayToInterger(second_string);    // 문자열 -> 정수
    // 정수로 변환된 두 수를 합산한 결과값을 출력
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}
