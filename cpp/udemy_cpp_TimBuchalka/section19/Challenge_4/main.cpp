// Section 19 Challenge 4
// Copy Romeo and Juliet with line numbers

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

    ifstream in_file {"./Challenge_4/romeoandjuliet.txt"};
    ofstream out_file {"./Challenge_4/romeoandjuliet_out.txt"};

    if (!in_file) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    if (!out_file) {
        cerr << "Error creating file" << endl;
        return 1;
    }

    string line;
    int line_number = 0;

    while (getline(in_file, line)) {
        if (line == "")
            out_file << endl;
        else {
            ++line_number;
            out_file << setw(7) << left << line_number
                     << line << endl;
        }
    }

    cout << "File copied" << endl;

    in_file.close();
    out_file.close();

    cout << endl;
    return 0;
}
