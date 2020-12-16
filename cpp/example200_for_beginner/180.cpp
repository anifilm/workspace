//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result;

    copy_n(data, 5, back_inserter(result));

    cout << "=== result ===" << endl;
    for (auto i : result)
        cout << i << ", ";
    cout << endl;

    return 0;
}
