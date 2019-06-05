// Section 19
// Read File 1
// Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream in_file;
	in_file.open("./ReadFile_1/test.txt");

	if (!in_file) {
		cerr << "Program opening file" << endl;
		return 1;
	}

	string line;
	int num;
	double total;

	in_file >> line >> num >> total;

	cout << line << endl;
	cout << num << endl;
	cout << total << endl;

	in_file.close();

	cout << endl;	
	return 0;
}