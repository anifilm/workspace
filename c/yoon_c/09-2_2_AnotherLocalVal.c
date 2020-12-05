// 다양한 형태의 지역 변수
#include <stdio.h>

int main() {

    int cnt;

    for (cnt = 0; cnt < 3; cnt++) {
        int num = 0;    // 값 초기화
        num++;          // 값 증가를 반복함
        printf("%d번째 반복, 지역 변수 num은 %d\n", cnt + 1, num);
    }

    if (cnt == 3) {
        int num = 7;
        num++;
        printf("\nif문 내에 존재하는 지역 변수 num은 %d\n", num);
    }

    return 0;
}
