/* 도전! 프로그래밍 1
도전 2
프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해
보자. 예를 들어서 프로그램 사용자가 3과 5를 입력하면 3단, 4단, 5단이 출력되어야 하고,
2와 4를 입력하면 2단, 3단, 4단이 출력되어야 한다.
단 한가지 조건이 있다. 사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
즉, 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.

[도전 2의 해결을 위한 GUIDE]
두 개의 정수를 인자로 전달받아서 두 수 사이의 구구단을 출력하는 함수를 정의하고, main
함수에서 이 함수를 출력하는 형태로 구현해 보자.
*/
#include <stdio.h>

void PrintNineNineDan(int n1, int n2) {
    int i, j;
    for (i = n1; i <= n2; i++) {
        for (j = 1; j < 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {

    int num1, num2;

    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        PrintNineNineDan(num2, num1);
    else
        PrintNineNineDan(num1, num2);

    return 0;
}
