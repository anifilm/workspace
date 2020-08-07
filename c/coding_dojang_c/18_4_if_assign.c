#include <stdio.h>

int main() {

    int num = 5;

    if (num = 2)        // num에 10 값이 대입 된다. 0 이외의 숫자는 참이므로 10은 참
        printf("10 입니다. 값 확인 %d (값이 대입되어 잘못된 결과 출력)\n", num);

    if (10 == num)      // 오류 방지용 구문
        printf("10 입니다. 값 확인 %d \n", num);
    else
        printf("10 이 아닙니다. 값 확인 %d\n", num);

    return 0;
}
