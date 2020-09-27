// 06 05번과 동일한 목적의 프로그램을 작성하되 이번에는 아래 함수를 사용하여 순서를 뒤집은
// 배열의 시작 주소를 리턴하는 방식으로 작성하라.
// 힌트 main으로 되돌아가도 이 함수의 리턴 값이 가리키는 곳에 데이터가 남아 있게 하려면 함수
// 내부에서 malloc을 호출해야 한다.
#include <stdio.h>
#include <stdlib.h>

int* reverse_array(int *a, int length) {
    int *p = (int *)malloc(sizeof(int) * length);
    if (p == NULL)
        exit(1);
    for (int i = 0; i < length; i++)
        *(p + (length - 1 - i)) = *(a + i);
    return p;
}

int main() {

    int i = 0, num, length, original[100], *reversed;

    printf("Enter a sequence of positive integers.\n");
    while (1) {
        scanf("%d", &num);
        if (num <= 0) break;
        original[i++] = num;
    }
    length = i;

    reversed = reverse_array(original, length);
    for (i = 0; i < length; i++)
        printf("%d ", reversed[i]);
    printf("\n");

    free(reversed);

    return 0;
}
