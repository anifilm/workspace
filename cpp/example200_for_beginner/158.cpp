// list 합치기, 이어 붙이기 (merge, splice)
#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> data1;
    list<int> data2 = {3, 4, 5};

    data1.push_back(2);
    data1.push_back(7);

    data1.merge(data2);

    cout << "=== List Merge===" << endl;
    for (list<int>::iterator iter = data1.begin();
        iter != data1.end();
        iter++)
            cout << *iter << ", ";
    cout << endl;

    data2 = {3, 4, 5};
    data1.splice(data1.begin(), data2);

    cout << "\n=== List Splice ===" << endl;
    for (auto iter = data1.begin();
        iter != data1.end();
        iter++)
            cout << *iter << ", ";
    cout << endl;

    return 0;
}
