// 반환형이 참조형 (Reference Type)인 경우 1
#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref) {
    ref++;
    return ref;
}

int main() {

    int num1 {1};
    int& num2 = RefRetFuncOne(num1);    // int& ref 참조자를 반환, 이를 다시 참조자에 저장하고 있다.
    /*
    int& ref = num1;
    int& num2 = ref;    // num2를 반환값 int& ref의 참조자로 선언
    */

    num1++;
    num2++;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}
