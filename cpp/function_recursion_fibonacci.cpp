// Section 11
// Recursion - Fibonacci

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;       // base caes
    return fibonacci(n-1) + fibonacci(n-2);     // recursion
}

int main() {
    cout << fibonacci(5) << endl;       // 5
    cout << fibonacci(30) << endl;      // 832040
    cout << fibonacci(40) << endl;      // 102334155

	cout << endl;	
	return 0;
}