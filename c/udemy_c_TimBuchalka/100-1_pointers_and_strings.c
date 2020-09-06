// Section 12 : 100. Pointers and String
// Example (array parameter vs char * parameter)
#include <stdio.h>

// void copyString(char to[], char from[]) {
//     int i;

//     for (i = 0; from[i] != '\0'; i++)
//         to[i] = from[i];

//     to[i] = '\0';
// }

void copyString(char *to, char *from) {
    for (; *from != '\0'; from++, to ++)
        *to = *from;

    *to = '\0';
}

int main(void) {

	char string1[] = "A string to be copied.";
	char string2[50];

	copyString(string2, string1);
	printf("%s\n", string2);

	return 0;
}
