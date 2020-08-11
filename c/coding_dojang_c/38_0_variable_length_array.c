#include <stdio.h>

int main() {

    int size;

    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &size);     // 배열의 크기를 입력받음

    int numArr[size];

    printf("numArr sizeof: %d\n", sizeof(numArr));
    printf("numArr length: %d\n", sizeof(numArr) / sizeof(numArr[0]));

    return 0;
}
