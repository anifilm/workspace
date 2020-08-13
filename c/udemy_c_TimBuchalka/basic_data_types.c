#include <stdio.h>

int main() {

	int intergerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 0;

	printf("Interger Value: %i\n", intergerVar);
    printf("Float Value: %f\n", floatingVar);
    printf("Double Value: %e\n", doubleVar);
	printf("Double Value: %g\n", doubleVar);
	printf("Char Value: %c\n", charVar);

    printf("Bool Value: %i\n", boolVar); 

	return 0;
}