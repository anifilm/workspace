// 정수값에 특정 숫자의 배수가 포함되어 있는지 확인하기
#include <stdio.h>

int main() {

    int num, check, count = 0;

    printf("정수값 입력: ");
    scanf("%d", &num);

    do {
        check = num % 10;
        if (check && (check % 3) == 0) {
            if (count == 0) printf("포함된 3의 배수: ");
            printf(" %d", check);
            count ++;
        }
        num = num / 10;
    } while (num > 0);

    if (count == 0)
        printf("입력한 숫자에는 3의 배수가 없습니다.\n");
    else
        printf("가(이) 3의 배수입니다.\n");

    return 0;
}
