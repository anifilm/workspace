// type_tratis 사용하기 1 (정수, enum, signed)
#include <iostream>

using namespace std;

enum TempEnum {};
enum class TempEnumClass : int {};

int main() {

    cout << boolalpha;

    cout << "== is_integral (정수 계열의 형식인지 검사) ==" << endl;
    cout << is_integral<TempEnum>::value << ", ";
    cout << is_integral<TempEnumClass>::value << ", ";
    cout << is_integral<signed int>::value << ", ";
    cout << is_integral<unsigned int>::value << ", ";
    cout << is_integral<double>::value << ", ";
    cout << is_integral<bool>::value << endl;

    cout << "\n== is_enum (enum 계열의 형식인지 검사) ==" << endl;
    cout << is_enum<TempEnum>::value << ", ";
    cout << is_enum<TempEnumClass>::value << ", ";
    cout << is_enum<int>::value << endl;

    cout << "\n== is_signed (signed 정수 계열 형식인지 검사) ==" << endl;
    cout << is_signed<TempEnum>::value << ", ";
    cout << is_signed<signed int>::value << ", ";
    cout << is_signed<unsigned int>::value << endl;

    cout << "\n== is_unsigned (unsigned 정수 계열의 형식인지 검사) ==" << endl;
    cout << is_unsigned<TempEnumClass>::value << ", ";
    cout << is_unsigned<int>::value << ", ";
    cout << is_unsigned<unsigned int>::value << endl;

    return 0;
}
