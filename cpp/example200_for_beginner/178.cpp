// 분할한 영역 저장하기 (partition_copy)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (i % 2) == 1; }

int main() {

    vector<int> data1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> odd;
    vector<int> even;

    partition_copy(data1.begin(), data1.end(), back_inserter(odd), back_inserter(even), IsOdd);

    cout << "=== 홀수 ===" << endl;
    for (int x : odd)
        cout << x << ", ";
    cout << endl;

    cout << "\n=== 짝수 ===" << endl;
    for (int x : even)
        cout << x << ", ";
    cout << endl;

    return 0;
}
