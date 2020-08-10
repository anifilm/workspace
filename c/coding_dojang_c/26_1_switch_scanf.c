#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);  // 값을 입력받음

    switch (num) {      // num의 값에 따라 분기
    case 1:             // 1일 때
        printf("num: 1입니다.\n");
        break;
    case 2:             // 2일 때
        printf("num: 2입니다.\n");
        break;
    default:            // 아무 case에도 해당되지 않을 때
        printf("default\n");
        break;
    }

    return 0;
}
