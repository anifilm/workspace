#include <stdio.h>
#include "15-2_point.h"
#include "15-2_circle.h"

int main() {

    pointType point, *p = &point;
    circleType circle, *c = &circle;

    p->x = 10;
    p->y = 20;
    c->center = *p;
    c->radius = 30;

    printf("You made a circle with \n");
    printf("center.x: %d, center.y: %d, radius: %d\n", c->center.x, c->center.y, c->radius);

    return 0;
}
