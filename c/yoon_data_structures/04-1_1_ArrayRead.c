// Linked! 무엇을 연결하겠다는 뜻인가!
#include <stdio.h>

int main() {

    int arr[10];
    int readCount = 0;
    int readData;

    while (1) {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if (readData < 1) break;
        arr[readCount++] = readData;
    }

    for (int i = 0; i < readCount; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
