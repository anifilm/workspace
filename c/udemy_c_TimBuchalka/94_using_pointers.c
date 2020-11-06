// Section 12 : 94. Using Pointers
#include <stdio.h>

int main() {

    long num1 = 0L;
    long num2 = 0L;
    long* p_num = NULL;

    p_num = &num1;      // Get address of num1
    *p_num = 2L;        // Set num1 to 2             (0 -> 2)
    num2++;             // Increment num2            (0 -> 1)
    num2 += *p_num;     // Add num1 to num2          (1 -> 3)

    p_num = &num2;      // Get address of num2
    (*p_num)++;         // Increment num2 indirectly (3 -> 4)

    printf("num1 = %ld, num2 = %ld, *p_num = %ld, *p_num + num2 = %ld\n",
            num1, num2, *p_num, *p_num + num2);

    return 0;
}
