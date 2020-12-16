// array 삽입, 수정, 복사하기 (fill, at, copy)
#include <iostream>
#include <array>

using namespace std;

void Print(const array<int, 3>& data) {
    cout << "=== Print ===" << endl;
    for (auto iter = data.begin();
        iter != data.end();
        iter++)
            cout << *iter << ", ";
    cout << endl << endl;
}

int main() {

    array<int, 3> data1 = {10, 2, 5};
    array<int, 3> data2;

    Print(data1);

    data2.fill(0);
    data2.at(1) = 200;
    Print(data2);

    copy(data1.begin(), data1.end(), data2.begin());
    Print(data2);

    return 0;
}
