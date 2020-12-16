// list 특정 요소 삭제, 역순 재배치 (remove, reverse)
#include <iostream>
#include <list>

using namespace std;

void Print(const list<int>& data) {
    cout << "=== Print ===" << endl;
    for (auto iter = data.begin();
        iter != data.end();
        iter++)
            cout << *iter << ", ";
    cout << endl << endl;
}

bool IsOdd(int arg) {
    return arg % 2 == 0 ? 0 : 1;
}

int main() {

    list<int> data = {1, 2, 4, 2, 7, 10, 13, 14};

    data.remove(2);
    data.remove_if(IsOdd);
    Print(data);

    data.reverse();
    Print(data);

    return 0;
}
