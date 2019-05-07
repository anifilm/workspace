#include <iostream>
#include <climits>

using namespace std;

int main() {
	
	cout << "+------------------------------+" << endl;
	cout << "|     Add Integers Example     |" << endl;
	cout << "+------------------------------+" << endl;

	int number;
	int sum {0};

	while (true) {

		cout << "Please enter an integer or EOF: ";
		cin >> number;

		if (cin.eof()) { break; }

		if (cin.fail()) {
			cout << "Invalid input" << endl;
			cin.clear();
			cin.ignore(LLONG_MAX, '\n');
			continue;
		}

		sum += number;
	}
	cin.clear();

	cout << "\nThe sum is " << sum << endl;
} 