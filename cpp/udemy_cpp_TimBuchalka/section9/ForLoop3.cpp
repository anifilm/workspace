// Section 9
// Range-based For Loop

#include <iostream>

using namespace std;

int main() {

//  for (auto val : {1, 2, 3, 4, 5})
//      cout << val << endl;

//  for (auto c : "This is a test")
//      if (c != ' ')
//          cout << c;

    for (auto c : "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    cout << endl;
    return 0;
}
