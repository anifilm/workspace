// tuple 사용하기 (make tuple, get)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {

    typedef tuple<string, int , double> Data;

    Data data1("문자열1", 11, 1.1);
    auto data2 = make_tuple("문자열2", 12, 1.2);

    cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl;
    cout << get<0>(data2) << ", " << get<1>(data2) << ", " << get<2>(data2) << endl;

    return 0;
}
