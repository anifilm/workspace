#include <stdio.h>

struct Point2D {         // 구조체 정의
    int x;
    int y;
};

int main() {

    struct Point2D p1;    // 포인트1
    struct Point2D p2;    // 포인트2

    // 포인트1의 위치
    p1.x = 30;
    p1.y = 20;

    // 포인트2의 위치
    p2.x = 60;
    p2.y = 50;

    printf("p1: %d %d\n", p1.x, p1.y);
    printf("p2: %d %d\n", p2.x, p2.y);

    return 0;
}
