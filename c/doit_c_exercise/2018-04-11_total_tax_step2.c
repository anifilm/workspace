// 과세 금액 구하기
#include <stdio.h>
#define MAX 6

typedef unsigned int MONEY;

int main() {

	MONEY total_income;
	MONEY tax = 0;

	MONEY limit[MAX] = {12000000, 46000000, 88000000, 150000000, 300000000, 500000000};
	double tax_rate[MAX] = {0.06, 0.15, 0.24, 0.35, 0.38, 0.40};
	int i;

	printf("Total Income: ");
	scanf("%u", &total_income);

	for (i = 0; i < MAX; i++) {
		if (total_income > limit[i]) {
			if (i > 0)
				tax += (MONEY)((limit[i] - limit[i - 1]) * tax_rate[i]);
			else
				tax += (MONEY)(limit[i] * tax_rate[i]);
			if (i == MAX - 1) {
				tax += (MONEY)((total_income - limit[i]) * 0.42);
			}
		} else {
			if (i > 0) total_income -= limit[i - 1];
			tax += (MONEY)(total_income * tax_rate[i]);
			break;
		}
	}
	printf("tax = %u\n", tax);

	return 0;
}
