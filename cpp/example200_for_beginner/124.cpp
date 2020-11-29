// type_tratis 사용하기 2 (empty, array, same)
#include <iostream>
#include <map>

using namespace std;

struct TempStruct {
    int x = 0;
};

class TempClass {
};

int main() {

    cout << boolalpha;

    cout << "== is_empty (내부 요소가 비어 있는지 확인) ==" << endl;
    cout << is_empty<TempStruct>::value << ", ";
    cout << is_empty<TempClass>::value << endl;

    cout << "\n== is_array (배열 형식인지 확인) ==" << endl;
    cout << is_array<TempStruct>::value << ", ";
    cout << is_array<map<int, double>>::value << ", ";
    cout << is_array<int[3]>::value << endl;

    cout << "\n== is_same (두 형식을 비교해 같다면 true, 다르다면 false 반환) ==" << endl;
    cout << is_same<TempStruct, TempClass>::value << ", ";
    cout << is_same<int, signed int>::value << ", ";
    cout << is_same<int, bool>::value << ", ";
    cout << is_same<char, unsigned char>::value << endl;

    return 0;
}
