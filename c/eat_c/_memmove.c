#include <stdio.h>
#include <string.h>

int main() {

	char str[50] = "I love Eat C hahaha!";

	printf("%s\n", str);
	printf("memmove 이후\n");

	memmove(str + 20, str + 12, 8);
	printf("%s\n", str);

	return 0;
}
