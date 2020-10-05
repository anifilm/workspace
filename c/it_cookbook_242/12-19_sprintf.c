#include <stdio.h>

int main() {

    char str[100];

    char *name = "Lee eun";
    int age = 19;
    double weight = 58.5;

    char *first = "First line of a long string.";
    char *second = "Second line of a long string.";

    sprintf(str, "Name: %s, Age: %d, Weight: %lf", name, age, weight);
    puts(str);

    sprintf(str, "%s %s", first, second);
    puts(str);

    return 0;
}
