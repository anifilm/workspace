// 함수의 인자로 전달되고 return문에 의해 반환되는 구조체 변수
#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void ShowPosition(Point pos) {
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition() {
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main() {

    Point curPos = GetCurrentPosition();
    ShowPosition(curPos);

    return 0;
}
