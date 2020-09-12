#include <stdio.h>

int main() {

    short a = 32768;
    short b = a / 2;
    float c = 1E45;
    float d = c / 2.0;

    printf("a: %d, b: %d, c: %f, d: %f\n", a, b, c, d);

	return 0;
}
