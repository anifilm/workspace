#include <stdio.h>

int main() {

    unsigned char ch;
    int num;

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("It is %d in decimal.\n", ch);

    printf("Enter the same character again: ");
    scanf("%d", &num);
    printf("It is %d in deciaml.\n", num);

	return 0;
}
