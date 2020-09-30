// 과세 금액 구하기
#include <stdio.h>

typedef unsigned int MONEY;

int main() {

	MONEY total_income;
	MONEY tax;

	printf("Total Income: ");
	scanf("%u", &total_income);

	if (total_income > 12000000) {
		tax = (MONEY)(12000000 * 0.06);
		if (total_income > 46000000) {
			tax = tax + (MONEY)((46000000 - 12000000) * 0.15);
			if (total_income > 88000000) {
				tax = tax + (MONEY)((88000000 - 46000000) * 0.24);
				if (total_income > 150000000) {
					tax = tax + (MONEY)((150000000 - 88000000) * 0.35);
					if (total_income > 300000000) {
						tax = tax + (MONEY)((300000000 - 150000000) * 0.38);
						if (total_income > 500000000) {
							tax = tax + (MONEY)((500000000 - 300000000) * 0.40);
							tax = tax + (MONEY)((total_income - 500000000) * 0.42);
						} else {
							total_income -= 300000000;
							tax = tax + (MONEY)(total_income * 0.40);
						}
					} else {
						total_income -= 150000000;
						tax = tax + (MONEY)(total_income * 0.38);
					}
				} else {
					total_income -= 88000000;
					tax = tax + (MONEY)(total_income * 0.35);
				}
			} else {
				total_income -= 46000000;
				tax = tax + (MONEY)(total_income * 0.24);
			}
		} else {
			total_income -= 12000000;
			tax = tax + (MONEY)(total_income * 0.15);
		}
	} else {
		tax = (MONEY)(total_income * 0.06);
	}

	printf("tax = %u\n", tax);

	return 0;
}

/*
2018년 1월 1일 이후부터 적용되는 과세표준
    과세표준			세율			  		설명
  1200만 원 이하		 6%			 종합 소득 금액 * 0.06
  4600만 원 이하		15%		     72만 원 + (1200만 원을 초과한 금액) * 0.15
  8800만 원 이하		24%		    582만 원 + (4600만 원을 초과한 금액) * 0.24
1억 5천만 원 이하 	   35%	      1590만 원 + (8800만 원을 초과한 금액) * 0.35
     3억 원 이하		38%	   	   3760만 원 + (1억 5천만 원을 초과한 금액) * 0.38
     5억 원 이하		40%	   	   9460만 원 + (3억 원을 초과한 금액) * 0.40
     5억 원 초과		42%		1억 7460만 원 + (5억 원을 초과한 금액) * 0.42
*/
