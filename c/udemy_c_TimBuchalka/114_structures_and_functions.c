// Section 13 : 114. Structures and Functions
#include <stdio.h>

#define FUNDLEN 30

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah) {
    return (moolah.bankfund + moolah.savefund);
}

int main() {

    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    printf("Stan has a total of $%.2f\n", sum(stan));

    return 0;
}
