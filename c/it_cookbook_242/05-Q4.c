// 04 삼각형의 두 변의 길이 합은 항상 나머지 변의 길이보다 크다. 세 변의 길이를 입력받아
// 그것이 삼각형이 될 수 있으면 세 변의 길이 합을 출력하고 그렇지 않으면 'No such triangle'
// 이라고 출력하는 프로그램을 작성하라. 단, 세 변의 길이는 모두 double 타입니다.
// > Enter tree real numbers:
// > 0.0 0.0 0.0 ([Enter])
// > No such triangle.
#include <stdio.h>

int main() {

    double a, b, c;

    printf("Enter tree real numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
        printf("No such triangle.\n");
    else
        printf("%lf\n", a + b + c);

    return 0;
}
