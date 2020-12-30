// private 상속
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

class Derived : private Base {
public:
    void ShowBaseMember() {
    //  cout << num1 << ", ";  // private, 접근 불가
        cout << num2 << ", ";  // private
        cout << num3 << endl;  // private
    }
};

class DeDerived : public Derived {
public:
    void ShowBaseMember() {
    //  cout << num1 << ", ";  // private, 접근 불가
    //  cout << num2 << ", ";  // private, 접근 불가
    //  cout << num3 << endl;  // private, 접근 불가
    }
};
