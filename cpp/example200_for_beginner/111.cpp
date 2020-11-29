// static 클래스 이해하기 (static)
#include <iostream>

using namespace std;

static class Calculator {
public:
    int Plus(const int x, const int y) const {
        return x + y;
    }
} calc; // static 클래스를 이용하려면 해당 클래스를 가리키는 변수 필요

int main() {

    cout << "1 + 2 = " << calc.Plus(1, 2) << endl;
    cout << "2 + 3 = " << calc.Plus(2, 3) << endl;

    return 0;
}
