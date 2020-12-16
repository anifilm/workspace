#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|     Mirror String Example     |" << endl;
    cout << "+------------------------------+" << endl;

    string line {"Hello World!"};
    string line2;

    cout << "\nstring to mirror: " << line << endl;

    for (int i = (int)line.size() - 1; i >= 0; --i) {
        line2 += line[i];
    }

    cout << "\nmirrored string: " << line2 << endl;

    return 0;
}
