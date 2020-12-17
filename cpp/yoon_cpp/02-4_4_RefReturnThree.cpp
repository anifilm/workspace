// 반환형이 참조형 (Reference Type)인 경우 3
#include <iostream>

using namespace std;

int RefRetFuncTwo(int& ref) {   // 반환형이 기본자료형 int이다.
    ref++;
    return ref;
}

int main() {

    int num1 = 1;
    int num2 = RefRetFuncTwo(num1);     // 함수의 반환값(ref)을 num2에 대입 (값을 전달 받는다)
    /*
    num1은 레퍼런스 전달로 함수를 통해 값이 2가 된다.
    num2는 반환값으로 2를 전달 받아 저장한다.
    */

    num1 += 1;      // num1: 2 + 1 = 3
    num2 += 100;    // num2: 2 + 100 = 102

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}

/*

int& RefRetFuncOne(int& ref);
int RefRetFuncTwo(int& ref);

반환형이 참조형인 RefRetFuncOne 함수는 반환값을 다음과 같이 두가지 형태로 저장 할 수 있다.

int num2 = RefRetFuncOne(num1);     // 가능
int& num2 = RefRetFuncOne(num1);    // 가능

하지만, 반환형이 기본자료형으로 선언된 RefRetFuncTwo 함수의 반환값은 반드시 변수에 저장해야 한다.
반환값은 상수나 다름없기 때문이다.

int num2 = RefRetFuncTwo(num1);     // 가능
int& num2 = RefRetFuncTwo(num1);    // 불가능

*/
