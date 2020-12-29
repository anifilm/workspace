#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1;
    mutable int num2;  // const 함수에 대해 예외를 둔다!
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
    void ShowSimpleData() const {
        cout << num1 << ", " << num2 << endl;
    }
    void CopyToNum2() const {
        num2 = num1;
    //  num1 = num2;  // 대입의 대상이 서로 뒤바뀐 상황을 방지
    }
};

int main() {

    SoSimple sm(1, 2);
    sm.ShowSimpleData();
    sm.CopyToNum2();
    sm.ShowSimpleData();

    return 0;
}

/*

키워드 mutable
const 함수 내에서의 값의 변경을 예외적으로 허용한다.

*/
