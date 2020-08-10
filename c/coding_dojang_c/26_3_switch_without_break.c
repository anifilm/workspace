#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);  // 값을 입력받음

    switch (num) {
    case 1:             // 1 또는
    case 2:             // 2일 때 코드 실행
        printf("num: 1 또는 2입니다.\n");
        break;
    case 3:             // 3 또는
    case 4:             // 4일 때 코드 실행
        printf("num: 3 또는 4입니다.\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
