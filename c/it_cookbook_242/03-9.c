#include <stdio.h>

int main() {

    int a = 4, b = 3, c = 2, d = 1, e = 0;

    printf("%d\n", (a > b) && (c > d));     //  true AND true >>  true: 1
    printf("%d\n", (a < b) || (c > d));     // false OR  true >>  true: 1
    printf("%d\n", (a < b) && (c > d));     // false AND true >> false: 0
    printf("%d\n", (a > b) || (c > d));     //  true OR  true >>  true: 1
    printf("%d\n", (a < b || c > d) &&      // (false OR true) AND (false && true)
                   (a == b && c >= d));     //                >> false: 0

    printf("%d\n", !(a > b));               // NOT(true)      >> false: 0
    printf("%d\n", !a);                     // NOT(4)         >> false: 0
    printf("%d\n", !c);                     // NOT(2)         >> false: 0
    printf("%d\n", !e);                     // NOT(0)         >>  true: 1

	return 0;
}

/*

논리 연산자          의미

    &&          logical AND
    ||          logical OR
    !           logical NOT

*/
