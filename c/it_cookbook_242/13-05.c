#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point increment(struct point s) {
    s.x += 1;
    s.y += 1;
    return s;
}

int main() {

    struct point a = {1, 1}, b, c;

    b = a;
    printf("b is (%d, %d)\n", b.x, b.y);

    c = increment(a);
    printf("c is (%d, %d)\n", c.x, c.y);

    if (a.x == b.x && a.y == b.y)
        printf("a and b have same values.\n");
    if (&a == &b)
        printf("a and b have same points.\n");

    return 0;
}
