// 파생 클래스 객체의 소멸 과정
#include <iostream>

using namespace std;

class SoBase {
private:
    int baseNum;
public:
    SoBase(int n) : baseNum(n) {
        cout << "SoBase() : " << baseNum << endl;
    }
    ~SoBase(){
        cout << "~SoBase() : " << baseNum << endl;
    }
};

class SoDerived : public SoBase {
private:
    int derivNum;
public:
    SoDerived(int n) : SoBase(n), derivNum(n) {
        cout << "SoDerived() : " << derivNum << endl;
    }
    ~SoDerived() {
        cout << "~SoDerived() : " << derivNum << endl;
    }
};

int main() {

    SoDerived de1(15);
    SoDerived de2(27);

    return 0;
}
