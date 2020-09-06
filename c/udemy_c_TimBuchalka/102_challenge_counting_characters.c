// Section 12 : 101. (Challenge) Counting characters in a String
#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main() {

   printf("stringLength(\"stringLength test\"): %d\n", stringLength("stringLength test"));
   printf("stringLength(\"\"): %d\n", stringLength(""));
   printf("stringLength(\"jason\"): %d\n", stringLength("jason"));

    return 0;
}

int stringLength(const char *string) {
    const char *lastAddress = string;

    while (*lastAddress)
        lastAddress++;

    return lastAddress - string;
}
