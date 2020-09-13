// 05 자연수를 입력받아 ① 그것이 5 또는 6 중 하나로 나누어 떨어지는지 ② 그것이 5와 6 모두로
// 나누어 떨어지는지 ③ 5와 6 모두로 나누어 떨어지지 않는지를 판단하는 프로그램을 작성하라.
// 단, 나누어 떨어지면 1, 그렇지 않으면 0을 출력한다.
#include <stdio.h>

int main() {

    int num;

    printf("Enter natural number: \n");
    scanf("%d", &num);

    printf("%d\n", (num % 5 == 0) || (num % 6 == 0));
    printf("%d\n", (num % 5) == 0 && (num % 6) == 0);
    printf("%d\n", (num % 5) != 0 && (num % 6) != 0);

	return 0;
}
