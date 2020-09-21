// 08 자연수 n을 입력받은 후 재귀 호출에 의해 화면에 n개의 asterisk(*)를 출력하는 프로그램을
// 작성하라.
#include <stdio.h>

void print_up(int n) {
    int i;
    if (n != 0) {
        print_up(n - 1);
        for (i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
}

int main() {

    int num;

    printf("Enter a number N: ");
    scanf("%d", &num);

    print_up(num);

    return 0;
}
