// Section 10 : 77. Common String Functions
#include <stdio.h>
#include <string.h>

int main() {

    if (strncmp("astronomy", "astro", 5) == 0) {
        printf("Found: astronomy\n");
    }

    if (strncmp("astrounding", "astro", 5) == 0) {
        printf("Found: astrounding\n");
    }

    return 0;
}
