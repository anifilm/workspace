// Q2 다음 두 개의 while 반복문을 중첩하여 사용해서 구구단을 출력하는 소스 코드입니다.
// 빈칸을 채워서 완성해 보세요.
#include <stdio.h>

int main() {

    int step = 2, i;

    while (step <= 9) {
        i = 1;
        while (i <= 9) {
            printf("%d x %d = %d\n", step, i, step * i);
            i++;
        }
        printf("\n");
        step++;
    }

	return 0;
}
