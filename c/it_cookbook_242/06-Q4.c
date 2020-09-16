// 04 원주율 PI의 값은 PI = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - ... 에 의해 구할 수 있다. 항의 개수가
// 늘어날수록 정밀도가 높아진다. 항의 개수를 입력받아 상응하는 정밀도로 파이 값을 구하는 프로그램을
// 작성하라.
// 힌트 셋째 항의 분모는 2 * 3 - 1 에 의해 계산된다. 홀수 번째 항은 양수, 짝수 번째 항은 음수다.
// > Enter the number of terms:
// > 500 ([Enter])
// > PI evaluated to 500 terms is 3.143596659594
#include <stdio.h>

int main() {

    int num, i, d;
    double pi;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        d = 2 * i - 1;
        if (i % 2 == 0)
            pi -= 4.0 / d;
        else
            pi += 4.0 / d;
    }

    printf("\nPI evaluated to %d terms is %.12lf\n", num, pi);

    return 0;
}
