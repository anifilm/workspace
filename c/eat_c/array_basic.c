#include <stdio.h>

int main() {
	
	int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 15};
	
	int i;

	for (i = 0; i < 10; i++) {
		printf("Array %d번째 원소: %d\n", i + 1, arr[i]);
	}

	return 0;
}
