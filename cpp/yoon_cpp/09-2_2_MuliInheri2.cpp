// 다중 상속의 모호성 (Ambiguous)
#include <iostream>

using namespace std;

class BaseOne {
public:
    void SimpleFunc() { cout << "BaseOne" << endl; }
};

class BaseTwo {
public:
    void SimpleFunc() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo {
public:
    void ComplexFunc() {
        // 동일한 이름의 멤버 함수에 호출시 네임스페이스를 명시하여 다중 상속의 모호성을 회피
        BaseOne::SimpleFunc();
        BaseTwo::SimpleFunc();
    }
};

int main() {

    MultiDerived md;
    md.ComplexFunc();

    return 0;
}
