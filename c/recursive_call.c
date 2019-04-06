#include <stdio.h>

int rSum(int);

int rSum(int n)
{
    if (n ==1)      // n이 1이면, 그냥 1을 반환함
    {
        return 1;
    }

    return n + rSum(n-1);   // n이 1이 아니면 n을 1부터 (n-1)까지의 합과 더한 값을 반환함
}

int main(void)
{
    int n = 15;

	printf("1부터 %d까지의 합은 %d입니다.\n", n, rSum(n));

	return 0;
}