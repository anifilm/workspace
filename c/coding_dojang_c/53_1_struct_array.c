#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main() {

    struct Point2D p[3];    // 크기가 3인 구조체 배열 생성

    p[0].x = 10;    // 인덱스로 요소에 접근한 뒤 점으로 멤버에 접근
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

    printf("p[0].x: %d, p[0].y: %d\n", p[0].x, p[0].y);
    printf("p[1].x: %d, p[1].y: %d\n", p[1].x, p[1].y);
    printf("p[2].x: %d, p[2].y: %d\n", p[2].x, p[2].y);

    return 0;
}
