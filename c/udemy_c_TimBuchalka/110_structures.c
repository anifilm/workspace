// Section 13 : 110. Creating and Using Structures
#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main() {

    struct date today;

    today.month = 9;
    today.day = 17;
    today.year = 2020;

    printf("Today's date is %02d/%02d/%d\n", today.month, today.day, today.year);

    return 0;
}
