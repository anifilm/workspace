#include <stdio.h>

#define PrintVariableName(var) printf(#var "\n");

int main(int argc, char **argv) {

	int number;

	PrintVariableName(number);

	return 0;
}
