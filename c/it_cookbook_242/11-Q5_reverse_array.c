// 05 양의 정수가 들어올 때까지 입력을 순서대로 a 배열에 저장하라. 이후 함수를 호출해야 한다.
// 이 함수는 a 배열을 넘겨받아 요소의 순서를 뒤집어서 b 배열에 저장한다. 이후 main으로 되돌
// 아가 b 배열을 순서대로 출력하라. 단, 입력 정수는 하나 이상으로 가정한다.
// void reverse_array(int* a, int* b, int length);
// > Enter a sequence of positive integers.
// > 1 2 3 4 5 -1 ([Enter])
// > 5 4 3 2 1
#include <stdio.h>

void reverse_array(int* a, int* b, int length) {
    for (int i = 0; i < length; i++)
        b[length - 1 - i] = a[i];
}

int main() {

    int i = 0, j, temp, a[16], b[16] = {0};

    printf("Enter a sequence of positive integers.\n");
    while (1) {
        scanf("%d", &temp);
        if (temp < 0) break;
        a[i++] = temp;
    }

    reverse_array(a, b, i);

    for (j = 0; j < i; j++)
        printf("%d ", b[j]);

    return 0;
}
