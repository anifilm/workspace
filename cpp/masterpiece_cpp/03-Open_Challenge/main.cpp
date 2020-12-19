#include <iostream>
#include "Exp.h"

using namespace std;

int main() {

    Exp a(3, 2);    // 3² = 9, 베이스 3, 지수 2
    Exp b(9);       // 9¹ = 9, 베이스 9, 지수 1
    Exp c;          // 1¹, 베이스 1, 지수 1

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ", 지수 " << a.getExp() << endl;

    if (a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    return 0;
}
