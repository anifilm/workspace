// protected로 선언된 멤버가 허용하는 접근의 범위
#include <iostream>

using namespace std;

class Base {
private:
    int num1;
protected:
    int num2;
public:
    int num3;
    void ShowData() {
        cout << num1 << ", " << num2 << ", " << num3 << endl;
    }
};

class Derived : public Base {
public:
    void ShowBaseMember() {
    //  cout << num1 << ", ";  // private, 접근 불가
        cout << num2 << ", ";  // protected
        cout << num3 << endl;  // public
    }
};
