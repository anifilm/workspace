#include <stdio.h>

int main() {

    struct first {
        short x; short y; short z;
    } a;

    struct second {
        float x; char y;
    } b;

    struct thrid {
        char x; double y; char z;
    } c;

    struct fourth {
        char x; char z; double y;
    } d;

    printf("sizeof(a) is %d\n", sizeof(a));
    printf("sizeof(b) is %d\n", sizeof(b));
    printf("sizeof(c) is %d\n", sizeof(c));
    printf("sizeof(d) is %d\n", sizeof(d));

    return 0;
}
