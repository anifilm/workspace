// 과세 금액 구하기
#include <stdio.h>
#define MAX 7

typedef unsigned int MONEY;

int main() {

	MONEY total_income;
	MONEY tax = 0;

	MONEY limit[MAX] = {0, 12000000, 46000000, 88000000, 150000000, 300000000, 500000000};
	double tax_rate[MAX] = {0.00, 0.06, 0.15, 0.24, 0.35, 0.38, 0.40};
	int i;

	printf("Total Income: ");
	scanf("%u", &total_income);

	for (i = 1; i < MAX; i++) {
		if (total_income > limit[i]) {
			tax += (MONEY)((limit[i] - limit[i - 1]) * tax_rate[i]);
			if (i == MAX - 1) {
				tax += (MONEY)((total_income - limit[i]) * tax_rate[i + 1]);
			}
		} else {
			total_income -= limit[i - 1];
			tax += (MONEY)(total_income * tax_rate[i]);
			break;
		}
	}
	printf("tax = %u\n", tax);

	return 0;
}
