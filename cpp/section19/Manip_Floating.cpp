// Section 19
// Stream manipulators - Floating point manipulators
// scientific, setprecision, fixed, showpoint, showpos, uppercase

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double num1 {123456789.123456789};
	double num2 {1234.5678};
	double num3 {1234.0};

	// using default settings
	cout << "\n-- Default -----------------------------------" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Note how since we can't display in precision 2 scientific notation is used
	cout << "\n-- Precision 2 -------------------------------" << endl;
	cout << setprecision(2);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Using precision 5
	cout << "\n-- Precision 5 -------------------------------" << endl;
	cout << setprecision(5);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Using precision 9
	cout << "\n-- Precision 9 -------------------------------" << endl;
	cout << setprecision(9);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Using precision 3 and fixed
	cout << "\n-- Precision 3 - fixed -----------------------" << endl;
	cout << setprecision(3) << fixed;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Using precision 3, fixed and scientific notation
	// Note precision is after the decimal
	cout << "\n-- Precision 3 - scientific ------------------" << endl;
	cout << setprecision(3) << scientific;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Same but display capital 'E' in scientific
	cout << "\n-- Precision 3 - scientific - uppercase ------" << endl;
	cout << setprecision(3) << scientific << uppercase;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Show '+' symbol for positive numbers
	cout << "\n-- Precision 3 - fixed - showpos -------------" << endl;
	cout << setprecision(3) << fixed << showpos;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Back to defaults
	cout.unsetf(std::ios::scientific | std::ios::fixed);
	cout << resetiosflags(ios::showpos);

	// Show trailing zeroes up to precision 10
	cout << "\n-- Precision 10 - showpos --------------------" << endl;
	cout << setprecision(10) << showpoint;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// Back to defaults
	cout.unsetf(std::ios::scientific | std::ios::fixed);
	cout << setprecision(6);
	cout << resetiosflags(std::ios::showpos);
	cout << resetiosflags(std::ios::showpoint);

	cout << "\n-- Back to default ---------------------------" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	cout << endl;	
	return 0;
}