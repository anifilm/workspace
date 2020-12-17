// Section 12
// References

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> stooges = {"Larry", "Moe", "Curly"};

    for (auto str : stooges)
        str = "Funny";						// str is a COPY of the each vector element

    for (auto str : stooges)				// No change
        cout << str << " ";
    cout << endl;

    cout << "\n------------------------------" << endl;

    for (auto &str : stooges)				// str is a reference to each vector element
        str = "Funny";

    for (auto const &str : stooges)	   	    // notice we are using const
        cout << str << " ";					// now the vector elements have changed
    cout << endl;

    return 0;
}
