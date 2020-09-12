#include <stdio.h>

int main() {

    char grade;
    int sum;

    grade = 'A';
    sum = 0x40302010;

    printf("Grade starts at address %p\n", &grade);
    printf("Sum starts as address %p\n", &sum);

	return 0;
}
