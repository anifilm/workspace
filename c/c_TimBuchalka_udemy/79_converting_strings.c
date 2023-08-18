// Section 10 : 79. Converting Strings
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    int i;

    char text[100];         // Input buffer for string to be searched
    char substring[40];     // Input buffer for string sought

    printf("Enter the string to be searched (less than %d charactrers): \n", 100);
    scanf("%s", text);

    printf("\nEnter the string sought (less than %d characters): \n", 40);
    scanf("%s", substring);

    printf("\nFirst string entered: \n%s\n", text);
    printf("\nSecond string entered: \n%s\n", substring);
    printf("\n");

    // Convert both strings to uppercase.
    for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; i++);
    for (i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; i++);

    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

    return 0;
}
