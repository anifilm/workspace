// 배열 일부 변경하기 (fill)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int data1[10] = {0,};
    fill(data1, data1 + 3, 10);
    fill(data1 + 4, data1 + 8, 20);

    cout << "=== data1 결과 ===" << endl;
    for (int i = 0; i < 10; i++)
        cout << data1[i] << ", ";
    cout << endl;

    vector<int> data2({1, 2, 3, 4, 5, 6, 7, 8});
    fill(data2.begin(), data2.begin() + 3, 30);

    cout << "\n=== data2 결과 ===" << endl;
    for (int i = 0, size = data2.size(); i < size; i++)
        cout << data2.at(i) << ", ";
    cout << endl;

    return 0;
}
