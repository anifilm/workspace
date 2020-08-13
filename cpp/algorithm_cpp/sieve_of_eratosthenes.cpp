#include <iostream>
#include <cstdlib>
#include <cstring>  

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cout << "Usage : prime2 [integer]" << endl;
		return 0;
	}

	int n = atoi(argv[1]);

	if (n < 2)
	{
		cout << "Error : n must be greater then 1" << endl;
		return 0;
	}

	int *parray;

	parray = new int[n + 1];

	if (parray == 0)
	{
		cout << "Error : memory allocation failed" << endl;
		return 0;
	}

	memset(parray, 0, sizeof(int)*(n + 1));

	int i, j;

	for (i = 2; i <= n; i++)
	{
		if (parray[i] == 1)
			continue;

		j = i;

		while ((j += i) <= n)
		{
			parray[j] = 1;
		}
	}

	for (i = 2; i <= n; i++)
	{
		if (parray[i] == 0)
			cout << i << " ";
	}
	cout << endl;

	delete[] parray;

	return 0;
}
