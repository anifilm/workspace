/* 01
두개의 자연수를 입력받아 첫번째 수를 두번째 수로 나눈 몫과 나머지를 출력하라.
  > Enter dividend.
  > 21 ([Enter])
  > Enter divisor.
  > 4 ([Enter])
  > Quotient is 5. Remainder is 1.
*/
#include <stdio.h>

int main() {

    int first_num, second_num;

    printf("Enter dividend: ");
    scanf("%d", &first_num);

    printf("Enter divisor: ");
    scanf("%d", &second_num);

    printf("Quotient is %d. Remainder is %d.\n", first_num / second_num, first_num % second_num);

    return 0;
}
