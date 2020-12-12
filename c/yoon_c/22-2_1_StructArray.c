// 구조체 배열의 선언과 접근
#include <stdio.h>

struct point {
    int xpos;
    int ypos;
};

int main() {

    struct point arr[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("점의 좌표 입력: ");
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for (i = 0; i < 3; i++)
        printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
    printf("\n");

    return 0;
}
