// 반환형이 참조형 (Reference Type)인 경우 2
#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref) {
    ref++;
    return ref;
}

int main() {

    int num1 {1};
    int num2 = RefRetFuncOne(num1);    // int& ref의 반환값을 num2에 대입 (값을 전달 받는다)
    /*
    num1은 레퍼런스 전달로 함수를 통해 값이 2가 된다.
    num2는 레퍼런스 반환값으로부터 2를 전달 받아 저장한다.
    */

    num1 += 1;      // num1: 2 + 1 = 3
    num2 += 100;    // num2: 2 + 100 = 102

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}
