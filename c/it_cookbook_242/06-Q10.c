// 10 삼각형의 밑변, 높이, 빗변을 각각 a, b, c라고 했을 때 피타고라스의 정리에 의하면 a² + b² = c²
// 이라는 등식이 성립해야 직각 삼각형이다. a, b, c 모두 입력 숫자 N보다 작거나 같다고 가정할때
// 직각 삼각형이 될 수 있는 자연수 a, b, c를 모두 나열하라. 단, 3, 4, 5와 4, 3, 5는 서로 다른
// 경우로 취급한다.
// 힌트 3중 for 루프를 사용한다.
// > Enter the maximim length N:
// > 7 ([Enter])
// > The right-angled triangles are,
// > 3 4 5
// > 4 3 5
#include <stdio.h>

int main() {

    int n, i, j, k;

    printf("Enter the maximim length N: ");
    scanf("%d", &n);

    printf("The right-angled triangles are,\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= n; k++) {
                if (i * i + j * j == k * k)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }

    return 0;
}
