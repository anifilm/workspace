// Section 19
// Write File 2
// File copy using getline

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream in_file {"./WriteFile_2/poem.txt"};
    ofstream out_file {"./WriteFile_2/poem_out.txt"};

    if (!in_file) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    if (!out_file) {
        cerr << "Error creating file" << endl;
        return 1;
    }

    string line;

    while (getline(in_file, line))
        out_file << line << endl;

    cout << "File copied" << endl;

    in_file.close();
    out_file.close();

    cout << endl;
    return 0;
}
