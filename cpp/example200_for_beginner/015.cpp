// 스코핑룰 이해하기 ( {} )
#include <iostream>

using namespace std;

int x = 10;

int Func1() {
    int x = 100;
    return x;
}

int Func2() {
    int y = x + 10;
    return y;
}

int main() {

    cout << "x = " << x << endl;
    cout << "x = " << Func1() << endl;
    cout << "y = " << Func2() << endl;

    return 0;
}
