// 정수값에 특정 숫자의 배수가 포함되어 있는지 확인하기
#include <stdio.h>

int main() {

    int num, check;

    printf("정수값 입력: ");
    scanf("%d", &num);

    do {
        check = num % 10;
        if (check && (check % 3) == 0) break;
        num = num / 10;
    } while (num > 0);

    if (num)
        printf("입력한 숫자에 3의 배수가 포함되어 있습니다.\n");
    else
        printf("입력한 숫자에는 3의 배수가 없습니다.\n");

    return 0;
}
