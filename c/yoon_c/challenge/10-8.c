/* 도전! 프로그래밍 1
도전 8
2의 n승을 구하는 함수를 재귀적으로 구현해 보자. 그리고 그에 따른 적절한 main함수도
구현해 보자. 참고로 재귀함수의 구현이 처음에는 어려운 편이기 때문에 여기서는 쉬운
문제를 제시하였다. (본문에 소개한 예제보다도 쉬운 문제다.)

[실행의 예]
정수 입력: 8
2의 8승은 256
*/
#include <stdio.h>

int Pow(int n) {
    if (n == 0)
        return 1;
    return 2 * Pow(n - 1);
}

int main() {

    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    printf("2의 %d승은 %d\n", num, Pow(num));

    return 0;
}
