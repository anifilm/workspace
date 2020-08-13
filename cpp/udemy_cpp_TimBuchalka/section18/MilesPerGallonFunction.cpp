// Section 18
// Miles per Gallon - Function

#include <iostream>

using namespace std;

double calculate_mpg(int miles, int gallons) {
	if (gallons == 0)
		throw 0;
	return static_cast<double>(miles) / gallons;
}

int main() {
	int miles {};
	int gallons {};
	double miles_per_gallon {};

	cout << "Enter the miles driven: ";
	cin >> miles;
	cout << "Enter the gallons used: ";
	cin >> gallons;

	try {
		miles_per_gallon = calculate_mpg(miles, gallons);
		cout << "Result: " << miles_per_gallon << endl;
	}
	catch (int &ex) {
		cerr << "Sorry, can't divide by zero" << endl;
	}

	cout << "Bye" << endl;	
	return 0;
}