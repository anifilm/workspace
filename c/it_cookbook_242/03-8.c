#include <stdio.h>

int main() {

    int a = 10, b = 5;
    double p = 10.0, q = 5.02, r = 10.00000000000000001;

    printf("%d\n", a > b);      //  true: 1
    printf("%d\n", a >= b);     //  true: 1
    printf("%d\n", a == b);     // false: 0
    printf("%d\n", a != b);     //  true: 1

    printf("%d\n", p > q);      //  true: 1
    printf("%d\n", p == r);     //  true: 1

	return 0;
}

/*

관계 연산자          의미

    >           greater than
    >=          greater than or equal
    <           less than
    <=          less than or equal
    ==          equal to
    !=          not equal

*/
