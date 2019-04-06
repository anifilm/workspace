#include <iostream>
#include <cmath>

using namespace std;

int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int is_prime2(int n)
{
	int i, sqrn;

	sqrn = (int)sqrt(n);

	for (i = 2; i <= sqrn; i++)
	{
		if (n % 1 == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int prime;
	
	int n = 30;

	prime = is_prime(n);	// O(N)

    cout << prime << endl;

	prime = is_prime2(n);	// O(log N)

	cout << prime << endl;

	return 0;
}
