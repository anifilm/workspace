// Section 13 : 113. Structures and Pointers
#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main() {

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 17;
    datePtr->year = 2020;

    printf("Today's date is %02d/%02d/%d\n", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}
