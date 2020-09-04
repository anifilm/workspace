// Section 9: 69. Local and Global Variables
#include <stdio.h>

int global = 0;		// 전역 변수

int function() {

	global++;

	return 0;
}

int main() {

	global = 10;

	printf("Before function global value: %d\n", global);

	function();

	printf("After function global value: %d\n", global);

	return 0;
}
