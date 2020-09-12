#include <stdio.h>

#define PI 3.14
#define ERR_MSG "Error has occurred while opening file.\n"
#define MAX 32.0
#define MIN 10.0

int main() {

    double area, circum, diff;

    area = PI * 3.0 * 3.0;
    printf("The area is %lf\n", area);

    circum = 2.0 * PI * 3.0;
    printf("The circumference is %lf\n", circum);

    diff = MAX - MIN;
    printf("The difference is %lf\n", diff);

    printf(ERR_MSG);

	return 0;
}
