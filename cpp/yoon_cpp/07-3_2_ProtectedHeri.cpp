// protected 상속
#include <iostream>

using namespace std;

class Base {
private:
    int num1;
protected:
    int num2;
public:
    int num3;
    Base() : num1(1), num2(2), num3(3) {}
    void ShowData() {
        cout << num1 << ", " << num2 << ", " << num3 << endl;
    }
};

class Derived : protected Base {
public:
    void ShowBaseMember() {
    //  cout << num1 << ", ";  // private, 접근 불가
        cout << num2 << ", ";  // protected
        cout << num3 << endl;  // public
    }
};

int main() {

    Derived de;
//  cout << de.num1 << ", ";  // private, 접근 불가
//  cout << de.num2 << ", ";  // protected, 접근 불가
    cout << de.num3 << endl;  // protected로 상속되어 접근 불가

    return 0;
}
