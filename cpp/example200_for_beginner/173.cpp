// 정렬되어 있는지 확인하기 (is_sorted)
#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main() {

    list<int> data1 {5, 3, 1, 7, 9};
    list<string> data2 {"ef", "ab", "cd", "ij", "gh"};

    cout << boolalpha;
    cout << "data1 sort: " << is_sorted(data1.begin(), data1.end()) << endl;
    cout << "data2 sort: " << is_sorted(data2.begin(), data2.end()) << endl;

    data1.sort();
    data2.sort();

    cout << "data1 sort: " << is_sorted(data1.begin(), data1.end()) << endl;
    cout << "data2 sort: " << is_sorted(data2.begin(), data2.end()) << endl;

    cout << "\n=== data1 ===" << endl;
    for (auto i : data1)
        cout << i << ", ";
    cout << endl;

    cout << "\n=== data2 ===" << endl;
    for (auto i : data2)
        cout << i << ", ";
    cout << endl;

    return 0;
}
