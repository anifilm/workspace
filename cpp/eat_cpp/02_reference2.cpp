// 참조자 이해하기
#include <iostream>

using namespace std;

int main() {

    int x;
    int& y = x;
    int& z = y;

    x = 1;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    y = 2;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    z = 3;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    return 0;
}
