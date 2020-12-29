// 파생 (derived) 클래스의 객체 생성 과정
#include <iostream>

using namespace std;

class SoBase {
private:
    int baseNum;
public:
    SoBase() : baseNum(20) {
        cout << "SoBase()" << endl;
    }
    SoBase(int n) : baseNum(n) {
        cout << "SoBase(int n)" << endl;
    }
    void ShowBaseData() {
        cout << baseNum << endl;
    }
};

class SoDerived : public SoBase {
private:
    int derivNum;
public:
    SoDerived() : derivNum(30) {
        cout << "SoDerived()" << endl;
    }
    SoDerived(int n) : derivNum(n) {
        cout << "SoDerived(int n)" << endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) {
        cout << "SoDerived(int n1, int n2)" << endl;
    }
    void ShowDerivData() {
        ShowBaseData();
        cout << derivNum << endl;
    }
};

int main() {

    cout << "case1 ... " << endl;
    SoDerived de1;
    de1.ShowDerivData();
    cout << "----------" << endl;

    cout << "case2 ... " << endl;
    SoDerived de2(12);
    de2.ShowDerivData();
    cout << "----------" << endl;

    cout << "case3 ... " << endl;
    SoDerived de3(23, 24);
    de3.ShowDerivData();
    cout << "----------" << endl;

    return 0;
}
