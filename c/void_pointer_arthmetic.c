#include <stdio.h>
#include <stdlib.h>

int main()
{
	void *ptr = malloc(100);

	printf("%p\n", ptr);
	printf("%p\n", (int *)ptr + 1);
	printf("%p\n", (int *)ptr - 1);

	void *ptr2 = ptr;

	printf("%p\n", (int *)++ptr2);
	printf("%p\n", (int *)--ptr2);

	printf("%p\n", (int *)ptr2++);
	printf("%p\n", (int *)ptr2--);

	free(ptr);

	return 0;
}
