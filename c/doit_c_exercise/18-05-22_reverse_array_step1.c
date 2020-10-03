// 배열의 항목 값을 뒤집기
#include <stdio.h>
#define MAX_COUNT 5

int main() {

	int num_list[MAX_COUNT] = {1, 2, 3, 4, 5};
	int left, right;
	int i, temp;

	printf("Before: ");
	for (i = 0; i < MAX_COUNT; i++)
		printf("%d ", num_list[i]);
	printf("\n");

	left = 0;
	right = MAX_COUNT - 1;
	for (i = 0; i < MAX_COUNT / 2; i++) {
		temp = num_list[left];
		num_list[left] = num_list[right];
		num_list[right] = temp;
		left++;
		right--;
	}

	printf("After: ");
	for (i = 0; i < MAX_COUNT; i++)
		printf("%d ", num_list[i]);
	printf("\n");

	return 0;
}
