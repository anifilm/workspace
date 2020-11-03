// 구조체 동적 할당
#include <stdio.h>
#include <stdlib.h>

struct fruits {
    int apple;
    int banana;
};

int main() {

    struct fruits *arr;
    int i, size;

    printf("과일 상자의 크기: ");
    scanf("%d", &size);

    arr = (struct fruits *)malloc(sizeof(struct fruits) * size);

    for (i = 0; i < size; i++) {
        printf("arr[%d].apple: ", i);
        scanf("%d", &arr[i].apple);
        printf("arr[%d].banana: ", i);
        scanf("%d", &arr[i].banana);
    }
    printf("\n----------------\n");

    for (i = 0; i < size; i++)
        printf("arr[%d].apple: %d, arr[%d].banana: %d\n", i, arr[i].apple, i, arr[i].banana);

    free(arr);
    return 0;
}
