#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
    int answer = 0;
    switch (*grade) {
        case 'S':
            answer = price * 0.95;
            break;
        case 'G':
            answer = price * 0.9;
            break;
        case 'V':
            answer = price * 0.85;
            break;
    }
    return answer;
}

int main() {
    int price1 = 2500;
    char* grade1 = "V";
    int ret1 = solution(price1, grade1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int price2 = 96900;
    char* grade2 = "S";
    int ret2 = solution(price2, grade2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
