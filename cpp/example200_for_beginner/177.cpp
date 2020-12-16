// 조건에 맞춰 영역을 분할하기 (partition, partition_point)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (i % 2) == 1; }

int main() {

    vector<int> data1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> data2;

    partition(data1.begin(), data1.end(), IsOdd);

    auto result = partition_point(data1.begin(), data1.end(), IsOdd);

    data2.assign(data1.begin(), result);

    for (int x : data2)
        cout << x << ", ";
    cout << endl;

    return 0;
}
