// 01 정수 5개를 입력받아 배열에 저장한 후 그 중 가장 큰 수와 작은 수를 출력하는 프로그램을
// 작성하라. 단, 루프를 한 번만 돌면서 동시에 가장 큰수와 작은 수를 갱신해야 한다.
// 힌트 첫 숫자를 min인 동시에 max로 초기화하라.
// > Enter five integers separated by blanks.
// > 5 2 3 2 8 ([Enter])
// > min is 2, max is 8
#include <stdio.h>

int main() {

    int i, min, max, num[5];

    printf("Enter five integers separated by blanks.\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &num[i]);

    min = max = num[0];
    for (i = 1; i < 5; i++) {
        if (min > num[i]) min = num[i];
        if (max < num[i]) max = num[i];
    }

    printf("min is %d, max is %d", min, max);

    return 0;
}
