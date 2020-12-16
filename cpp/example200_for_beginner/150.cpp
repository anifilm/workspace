// tuple 사용하기 (비교연산)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {

    tuple<int, string> data1(1, "abc");
    tuple<int, string> data2(2, "def");

    if (data1 > data2)
        cout << "data1 > data2" << endl;
    else
        cout << "data1 < data2" << endl;

    tuple<double, string> data3(1.0, "abc");
    tuple<double, string, int> data4(2.0, "def", 3);

    /*  튜플 크기가 달라서 비교할 수 없다.
    if (data3 == data4)
        cout << "data3 == data4" << endl;
    else
        cout << "data3 != data4" << endl;
    */

    return 0;
}
