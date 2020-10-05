#include <stdio.h>
#include <string.h>

int main() {

    char *here, *there;
    char text[] = "This is first. This is second. This is third.";
    const char ch = '.';

    here = strchr(text, ch);
    printf("Text after the first period is, %s\n", (here + 2));

    strcpy(text, "It is a right answer.");
    there = strstr(text, "right");
    strncpy(there, "wrong", 5);
    puts(text);

    return 0;
}
