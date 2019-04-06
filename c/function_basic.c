#include <stdio.h>

int magic_box(int i)
{
	i += 4;
	return i;
}

int main()
{
	int i;

	printf("마술 상자에 집어 넣을 값: ");
	scanf("%d", &i);

	printf("마술 상자를 지나면: %d\n", magic_box(i));

	return 0;
}