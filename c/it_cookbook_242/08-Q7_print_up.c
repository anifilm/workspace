// 07 재귀 호출에 의해 1부터 입력된 n까지의 숫자를 순차적으로 출력하는 프로그램을 작성하라.
// 힌트 재귀 호출을 하려면 반드시 main 이외의 별도의 함수를 만들어야 한다. print_up(n - 1)
// 로 머리 재귀를 가하여 되돌아오면서 출력한다.
// void print_up(int n);
// > Enter the last integer:
// > 10 ([Enter])
// > 1 2 3 4 5 6 7 8 9 10
#include <stdio.h>

void print_up(int n) {
    if (n != 0) {
        print_up(n - 1);
        printf("%d ", n);
    }
}

int main() {

    int num;

    printf("Enter the last integer: ");
    scanf("%d", &num);

    print_up(num);
    printf("\n");

    return 0;
}
