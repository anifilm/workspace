// 04 a, b, c가 있을 때 순환 스왑(Cycle Swap)은 a를 b로, b를 c로, c를 a로 옮기는 스왑을
// 말한다. 아래 함수를 참조 호출하여 main으로 돌아왔을 때 a, b, c의 값을 출력하라.
// void cyclic_swap(int* a, int* b, int* c);
// > Enter three integers a, b, c
// > 1 2 3 ([Enter])
// > Before cyclic swap, a = 1, b = 2, c = 3
// > After cyclic swap, a = 3, b = 1, c = 2
#include <stdio.h>

void cyclic_swap(int* a, int* b, int* c) {
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {

    int a, b, c;

    printf("Enter three integers a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before cyclic swap, a = %d, b = %d, c = %d\n", a, b, c);

    cyclic_swap(&a, &b, &c);
    printf("After cyclic swap, a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
