#include "13-01_car.h"
#include <stdio.h>

int main() {

    struct car mycar = {"sonata", 2015, 120000};

    printf("Name is %s\n", mycar.name);
    printf("Year is %d\n", mycar.year);
    printf("Mileage is %d\n", mycar.mileage);

    printf("&mycar is %p\n", &mycar);
    printf("&(mycar.year) is %p\n", &(mycar.year));

    printf("Enter the mileage updates.\n");
    scanf("%d", &mycar.mileage);
    printf("The new mileage is %d\n", mycar.mileage);

    if (mycar.mileage > 150000)
        printf("It's old.\n");
    else
        printf("It's not that old.\n");

    return 0;
}
