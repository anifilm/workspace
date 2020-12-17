// 함수 배우기 ( () )
#include <iostream>

using namespace std;

int Plus(const int x, const int y) {
    return x + y;
}

void Minus(const int x, const int y) {
    cout << x << " - " << y << " = " << x - y << endl;
}

int main() {

    cout << "2 + 6 = " << Plus(2, 6) << endl;
    Minus(10, 5);

    return 0;
}
