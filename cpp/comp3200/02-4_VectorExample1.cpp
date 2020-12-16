#include <iostream>

using namespace std;

class Vector1 {
private:
    int mX;
    int mY;

public:
    Vector1();
    Vector1(int x, int y);
};

Vector1::Vector1()
    : mX(0), mY(0) {
        cout << "Vector1(): (" << mX << ", " << mY << ")" << endl;
}

Vector1::Vector1(int x, int y)
    : mX(x), mY(y) {
        cout << "Vector1(int x, int y): (" << mX << ", " << mY << ")" << endl;
}

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|       Vector Example 1       |" << endl;
    cout << "+------------------------------+" << endl;

    Vector1 v1;
    Vector1 v2(10, 55);

    return 0;
}
