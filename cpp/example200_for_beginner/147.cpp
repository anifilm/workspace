// tuple 사용하기 (tie)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {

    typedef tuple<string, int , double> Data;

    Data data1 {"문자열", 10, 1.2};

    string my_str {};
    int my_int {};

    tie(my_str, my_int, ignore) = data1;

    cout << my_str << ", " << my_int << endl;

    return 0;
}
