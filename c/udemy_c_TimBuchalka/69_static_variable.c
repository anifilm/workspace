// Section 9: 69. Local and Global Variables
#include <stdio.h>

int function();
int function2();

int main() {

	function();
	function();
	function();
	function2();
	function();
	function2();

	return 0;
}

int function() {

	static int Function_Call = 0;

	Function_Call++;

	printf("Function 1 called: %d\n", Function_Call);

	return 0;
}

int function2() {

	static int Function_Call = 0;

	Function_Call++;

	printf("Function 2 called: %d\n", Function_Call);

	return 0;
}
