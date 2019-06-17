#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int intNumber = 10;

	const float floatNumber = static_cast<float>(intNumber);
	const short shortNumber = static_cast<short>(intNumber);

	cout << showbase << hex << uppercase;
	cout << "int: " << intNumber
		 << ", short: " << shortNumber
		 << endl;
	cout << "int: " << intNumber
		 << ", float: " << *(int*)(&floatNumber)
		 << endl;
}