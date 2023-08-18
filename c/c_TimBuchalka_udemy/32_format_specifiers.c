// Section 5: 32. Format Specifiers
#include <stdio.h>
#include <stdbool.h>

int main() {

	int intergerVar = 100;
	float floatingVar = 331.79f;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 0;
    bool boolVar2 = true;   // stdbool.h

	printf("Interger Value: %i\n", intergerVar);
    printf("Float Value: %.2f\n", floatingVar);
    printf("Double Value: %e\n", doubleVar);
	// printf("Double Value: %g\n", doubleVar);
	printf("Char Value: %c\n", charVar);

    printf("Bool Value: %i\n", boolVar);
    printf("Bool Value2: %s\n", boolVar2 ? "true" : "false");

	return 0;
}
