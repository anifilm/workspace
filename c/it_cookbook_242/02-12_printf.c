#include <stdio.h>

int main() {

    float f;
    double d;
    int i;

    f = 0.123456789123456789f;
    d = 0.123456789123456789;

    printf("float f is %f\n", f);
    printf("double d is %lf\n", d);
    printf("float in .20f is %.20f\n", f);
    printf("double in .20lf is %.20lf\n", d);
    printf("double in 25.4lf is \n[%25.4lf]\n", d);
    printf("double in -25.4lf is \n[%-25.4lf]\n", d);

    i = 365;
    printf("int in -8d is [%-8d]\n", i);
    printf("Exponet from of 123456.78 is %e\n", 123456.78);

	return 0;
}
