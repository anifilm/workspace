// Section 19
// Read File 2
// Continuous read of 3 data items in a loop

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

	ifstream in_file;
	in_file.open("./ReadFile_2/test.txt");

	if (!in_file) {
		cerr << "Error opening file" << endl;
		return 1;
	}

	string line;
	int num;
	double total;

	while (in_file >> line >> num >> total) {
		cout << setw(10) << left << line
			 << setw(10) << num
			 << setw(10) << total
			 << endl;
	}

	in_file.close();

	cout << endl;	
	return 0;
}