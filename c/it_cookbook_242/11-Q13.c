// 13 양의 정수가 들어올 때까지 입력을 순서대로 배열에 저장하라. 이후 아래 함수를 호출해야
// 한다. 이 함수는 arr 배열을 넘겨받아 배열 요소 중 가장 작은 것을 *min에, 가장 큰 것을
// *max에 저장한다. 이후 main으로 되돌아가 가장 작은 값과 가장 큰 값을 출력하라.
// void min_max(int *arr, int *min, int *max, int length);
// > Enter a sequence of positive integers.
// > 4 2 3 9 2 5 8 2 -1 ([Enter])
// > Minimum is 2, Maxium is 9
#include <stdio.h>

void min_max(int *arr, int *min, int *max, int length) {
    *min = *max = arr[0];
    for (int i = 1; i < length; i++)
        if (arr[i] > *max)
            *max = arr[i];
        else if (arr[i] < *min)
            *min = arr[i];
}

int main() {

    int a[16], temp, i = 0, min, max;

    printf("Enter a sequence of positive integers.\n");
    while (1) {
        scanf("%d", &temp);
        if (temp < 0) break;
        a[i++] = temp;
    }

    min_max(a, &min, &max, i);
    printf("Minimum is %d, Maxium is %d", min, max);

    return 0;
}
