#include <stdio.h>

struct day {
    unsigned int day: 5;
    unsigned int month: 4;
    int year;
};

int main() {

    struct day today = {25, 12, 2020};

    printf("Sizeof(struct day) is %d bytes.\n", sizeof(struct day));
    printf("Today is %d, %d, %d\n", today.day, today.month, today.year);

    return 0;
}
