#include <stdio.h>

int main()
{
	int i, j, n;

	printf("그려질 라인수: ");
	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		for (j = 1; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
