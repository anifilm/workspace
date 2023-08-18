// Section 10 : 78. Searching, Tokenizing, and Analyzing Strings

/*
Function            Test for

islower()           Lowercase letter

isupper()           Uppercase letter

isalpha()           Uppercase or lowercase letter

isalnum()           Uppercase or lowercase letter or a digit

iscntrl()           Control character

isprint()           Any printing character including space

isgraph()           Any printing character except space

isdigit()           Decimal digit ('0' to '9')

isxdigit()          Hexadecimal digit ('0' to '9', 'A' to 'F', 'a' to 'f')

isblank()           Standard blank characters (space, '\t')

isspace()           Whitespace character (space, '\n', '\t', '\v', '\r', '\f')

ispunct()           Printing character for which isspace() and isalnum() return false

*/

#include <stdio.h>
#include <ctype.h>

int main() {

    char buf[100];      // Input buffer
    int nLetters = 0;   // Number of letters in input
    int nDigits = 0;    // Number of digits in input
    int nPunct = 0;     // Number of punctuaion characters

    printf("Enter an interestin string of less than %d characters: \n", 100);
    scanf("%s", buf);   // Read a string into buffer

    int i = 0;          // Buffer index

    while (buf[i]) {
        if (isalpha(buf[i]))
            nLetters++;     // Increment letter count
        else if (isdigit(buf[i]))
            nDigits++;      // Increment digital count
        else if (ispunct(buf[i]))
            nPunct++;

        i++;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n",
           nLetters, nDigits, nPunct);

    return 0;
}
