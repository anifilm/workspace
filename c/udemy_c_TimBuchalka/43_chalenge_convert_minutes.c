// Section 6: 43. (Challenge) Convert minutes to years and days
#include <stdio.h>

int main() {

    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes: ");
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);

    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);

    return 0;
}
