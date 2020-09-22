#include <stdio.h>
#define MAX 5

int main() {

    int i, sum = 0, rabbit[MAX];
    double average;

    printf("Enter weight of five rabbits.\n");
    for (i = 0; i < MAX; i++)
        scanf("%d", &rabbit[i]);

    for (i = 0; i < MAX; i++)
        sum += rabbit[i];
    average = (double)sum / MAX;
    printf("Average weight is %.3lf\n", average);

    printf("&rabbit[0] is %p\n", &rabbit[0]);
    printf("&rabbit[1] is %p\n", &rabbit[1]);
    printf("rabbit is %p\n", rabbit);

    return 0;
}
