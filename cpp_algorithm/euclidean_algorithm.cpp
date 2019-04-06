#include <iostream>

using namespace std;

int get_gcd(int u, int v)
{
	int tmp;

	while (u > 0)
	{
		if (u < v)
		{
			tmp = u;
			u = v;
			v = tmp;
		}

		u = u - v;
	}

	return v;
}

int gcd_modulus(int u, int v)
{
	int tmp;

	while (v)
	{
		tmp = u % v;
		u = v;
		v = tmp;
	}

	return u;
}

int gcd_recursion(int u, int v)
{
	if (v == 0)
		return u;
	else
		return gcd_recursion(v, u % v);
}

int main()
{
	int u = 280;
	int v = 30;

	int	gcd = get_gcd(u, v);

	cout << "get_gcd result: " << gcd << endl;

	gcd = gcd_modulus(u, v);

	cout << "gcd_modulus result: " << gcd << endl;

	gcd = gcd_recursion(u, v);

	cout << "gcd_recursion result: " << gcd << endl;

	return 0;
}
