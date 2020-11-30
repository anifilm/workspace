// tuple 사용하기 (piecewise_construct)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

struct TupleExam {
    TupleExam(tuple<int, string>) {
        cout << "Tuple로 인자 전달" << endl;
    }

    TupleExam(int n, string s) {
        cout << "piecewise_construct로 인자 전달" << endl;
    }
};

int main() {

    tuple<int, string> data {1, "str"};

    pair<TupleExam, TupleExam> data1(data, data);
    pair<TupleExam, TupleExam> data2(piecewise_construct, data, data);
    pair<TupleExam, TupleExam> data3(make_tuple(1, "abc"), make_tuple(2, "def"));
    pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "def"), make_tuple(3, "ghi"));

    return 0;
}
