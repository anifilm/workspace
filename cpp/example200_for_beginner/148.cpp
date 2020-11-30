// tuple 사용하기 (cat)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {

    tuple<int, double> data1 {1, 2.1};
    tuple<double, string> data2 {3.4, "문자열"};

    auto data3 = tuple_cat(data1, data2);

    cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << ", " << endl;


    return 0;
}
