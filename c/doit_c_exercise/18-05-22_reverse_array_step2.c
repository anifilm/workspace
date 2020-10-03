// 배열의 항목 값을 뒤집기
#include <stdio.h>

int main() {

	int num_list[] = {1, 2, 3, 4, 5};
	int i, right, count, temp;
	
	count = sizeof(num_list) / sizeof(num_list[0]);

	printf("Before: ");
	for (i = 0; i < count; i++)
		printf("%d ", num_list[i]);
	printf("\n");

	right = count - 1;
	for (i = 0; i < count / 2; i++) {
		temp = num_list[i];
		num_list[i] = num_list[right];
		num_list[right] = temp;
		right--;
	}

	printf("After: ");
	for (i = 0; i < count; i++)
		printf("%d ", num_list[i]);
	printf("\n");

	return 0;
}
