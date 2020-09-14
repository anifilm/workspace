#include <stdio.h>

int main() {

    int a = 1, b = 0;

    if (a) {
        if (b)
            printf("a and b are both true.\n");
    } else
        printf("a is not true.\n");

    return 0;
}

/*

중괄호를 사용하면 구문의 의도가 명확해진다.

if (a)              // if (a == true)
    if (b)          // if (a == true && b == true)
        if (c)      // if (a == true && b == true && c == true)
            one;
        else        // if (a == true && b == true && c == false)
            two;
    else            // if (a == true && b == false)
        three;
else                // if (a == false)
    four;

*/
