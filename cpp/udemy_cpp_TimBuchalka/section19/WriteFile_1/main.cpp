// Section 19
// Write File 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream out_file("./WriteFile_1/output.txt", ios::app);

    if (!out_file) {
        cerr << "Error creating file" << endl;
        return 1;
    }

    string line;
    cout << "Enter something to write to the file: ";
    getline(cin, line);
    out_file << line << endl;

    out_file.close();

    cout << endl;
    return 0;
}
