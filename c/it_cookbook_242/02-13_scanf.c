#include <stdio.h>

int main() {

    int age, count;
    double weight, height;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Age: %d\n", age);

    printf("Enter height and weight: ");
    scanf("%lf %lf", &height, &weight);
    printf("Height: %lf, Weight: %lf\n", height, weight);

    printf("Enter height and weight: ");
    count = scanf("%lf %lf", &height, &weight);
    printf("scanf returns %d\n", count);

	return 0;
}
