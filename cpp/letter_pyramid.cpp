#include <iostream>
#include <string>

using namespace std;

int main() {

    string input_string {};

    cout << "Enter the string: ";
    cin >> input_string;

    int line_count = input_string.length();
    int space_count = line_count - 1;
    int word_count = 1;

    for (int i {0}; i < line_count; i++) {

        for (int j {0}; j < space_count; j++) {
            cout << ' ';
        }
        for (int j {0}; j < word_count; j++) {
            cout << input_string.at(j);
        }
        for (int j {word_count-1}; j > 0; j--) {
            cout << input_string.at(j-1);
        }
        for (int j {0}; j < space_count; j++) {
            cout << ' ';
        }
        space_count -= 1;
        word_count += 1;
        cout << endl;
    }

	cout << endl;	
	return 0;
}