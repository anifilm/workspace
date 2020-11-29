// type_tratis 사용하기 3 (conditional)
#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
string TempFunc(T1 x, T2 y) {
    conditional<is_same<T1, T2>::value, int, double >::type type1;
    return typeid(type1).name();
}

int main() {

    string type = TempFunc(1, 22.3);

    if (type == "double")
        cout << "double 자료형 입니다." << endl;
    else
        cout << "double 자료형이 아닙니다." << endl;

    return 0;
}
