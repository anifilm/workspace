#include <stdio.h>

// #define WIDTH 20
// #define HEIGHT 10

int main()
{
    const int WIDTH = 20;
    const int HEIGHT = 10;

    int triangleArea = WIDTH * HEIGHT / 2;
    int rectandleArea = WIDTH * HEIGHT;

    printf("WIDTH: %d\n", WIDTH);
    printf("HEIGHT: %d\n", HEIGHT);
    printf("triangleArea: %d\n", triangleArea);
    printf("rectandleArea: %d\n", rectandleArea);

    return 0;
}
