#include <stdio.h>

int main(int argc, char *argv[])
{
	int numberOfArguments = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];

	printf("Number of Arguments: %d\n", numberOfArguments);
	printf("Argument 1 is the Program name: %s\n", argument1);
	printf("Argument 2 is the commned line argument: %s\n", argument2);

	return 0;
}