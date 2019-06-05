// Section 19
// Read File 3
// Read and display Shakespeare Sonnet 18 poem using getline

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream in_file;
	in_file.open("./ReadFile_3/poem.txt");

	if (!in_file) {
		cerr << "Problem opening file" << endl;
		return 1;
	}

	string line {};

	while (getline(in_file, line)) {
		cout << line << endl;
	}

	in_file.close();

	cout << endl;	
	return 0;
}