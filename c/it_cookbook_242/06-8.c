#include <stdio.h>

int total(int p, double i, int y);

int main() {

    int principal;      // 원금
    double interest;    // 연리
    int years;          // 햇수

    printf("Enter principal, annual interest, and years.\n");
    scanf("%d %lf %d", &principal, &interest, &years);

    printf("\nTotal is %d\n", total(principal, interest, years));

    return 0;
}

int total(int p, double i, int y) {
    double rate = 1.0;
    while (y > 0) {
        rate *= (1.0 + i);
        y--;
    }
    return (int)(p * rate);
}
