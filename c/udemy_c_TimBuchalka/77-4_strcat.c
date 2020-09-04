// Section 10 : 77. Common String Functions
#include <stdio.h>
#include <string.h>

int main() {

    char myString[30] = "My string is ";
    char input[20];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string \"%s\" concatenated with \"%s\" is \n", myString, input);
    printf("%s\n", strcat(myString, input));

    return 0;
}
