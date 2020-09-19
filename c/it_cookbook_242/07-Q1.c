// 01 1부터 n까지의 합을 구하되 그 합이 입력 정수를 넘지 않아야 한다는 조건 하에서 최대값을 구하는
// 문제다. 이문제에 대해 위와 같이 소스코드를 작성한 결과, 그림에서 보듯이 잘못된 값이 출력되고
// 있다. Visual C가 제공하는 디버거를 이용하여 이문제를 해결하라. 조사식 창을 열어 i, max, sum
// 변수를 입력하고 루프를 돌 때마다 개별 변수 값이 어떻게 변화하는지 추적하고 루프를 빠져나갈 때의
// 값이 어떻게 변화하는지도 추적해야 한다. 추적 과정에 사용된 화면을 모두 캡처해서 하나의 파일로
// 제출하라.
#include <stdio.h>

int main() {

    int i, max, sum = 0;

    printf("Enter the maximum number: ");
    scanf("%d", &max);

    for (i = 1; sum <= max; i++) {
        sum += i;
        // 매 루프를 돌 때 개별 변수의 값이 어떻게 변화하는지 보기 위해 출력
        printf("i: %d, max: %d, sum: %d\n", i, max, sum);
    }

    printf("\nThe sum from 1 to %d is %d\n", i, sum);

    return 0;
}
