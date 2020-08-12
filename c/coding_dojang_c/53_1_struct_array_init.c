#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main() {

    // 구조체 배열을 선언하면서 초기화
    struct Point2D p1[3] = { {.x = 10, .y = 20}, {.x = 30, .y = 40}, {.x = 50, .y = 60} };

    printf("p1[0].x: %d, p1[0].y: %d\n", p1[0].x, p1[0].y);
    printf("p1[1].x: %d, p1[1].y: %d\n", p1[1].x, p1[1].y);
    printf("p1[2].x: %d, p1[2].y: %d\n", p1[2].x, p1[2].y);
    printf("\n");

    // 구조체 배열을 선언하면서 초기화
    struct Point2D p2[3] = { {10, 20}, {30, 40}, {50, 60} };

    printf("p2[0].x: %d, p2[0].y: %d\n", p2[0].x, p2[0].y);
    printf("p2[1].x: %d, p2[1].y: %d\n", p2[1].x, p2[1].y);
    printf("p2[2].x: %d, p2[2].y: %d\n", p2[2].x, p2[2].y);

    return 0;
}
