// Section 18
// catching std::exception s

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    try {
        for (int i = 0; i < 100; i++)
            string* s = new string[9999999];
    }
    catch (const bad_alloc& ex) {
        cerr << ex.what() << endl;
    }

    vector<int> vec {1, 2, 3, 4, 5};
    try {
        cout << vec.at(10);
    }
    catch (const out_of_range& ex) {
        cerr << ex.what() << endl;
    }

    cout << "Bye" << endl;
    return 0;
}
