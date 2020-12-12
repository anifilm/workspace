// 포인터 변수를 구조체의 멤버로 선언하기
#include <stdio.h>

struct point {
    int xpos;
    int ypos;
};

struct circle {
    double radius;
    struct point* center;   // 포인터 변수를 구조체 멤버로 선언
};

int main() {

    struct point cen = {2, 7};
    double rad = 5.5;

    struct circle ring = {rad, &cen};

    printf("원의 반지름: %g\n", ring.radius);
    printf("원의 중심: [%d, %d]\n", ring.center->xpos, ring.center->ypos);

    return 0;
}
