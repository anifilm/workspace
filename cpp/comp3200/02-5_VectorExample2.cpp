#include <iostream>

using namespace std;

class Vector2 {
private:
    int mX;
    int mY;

public:
    Vector2();
    Vector2(int x, int y);

    int GetX() const;
    int GetY() const;
    void SetX(int x);
    void SetY(int y);

    void Add(const Vector2& vector);
};

Vector2::Vector2()
    : mX(0), mY(0) {
}

Vector2::Vector2(int x, int y)
    : mX(x), mY(y) {
}

int Vector2::GetX() const {
    return mX;
}
int Vector2::GetY() const {
    return mY;
}
void Vector2::SetX(int x) {
    mX = x;
}
void Vector2::SetY(int y) {
    mY = y;
}

void Vector2::Add(const Vector2& vector) {
    mX += vector.mX;
    mY += vector.mY;
}

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|       Vector Example 2       |" << endl;
    cout << "+------------------------------+" << endl;

    Vector2 v1;
    Vector2 v2(13, 4);

    cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
    cout << "v2: (" << v2.GetX() << ", " << v2.GetY() << ")" << endl;

    v1.SetX(10);
    v1.SetY(20);

    v2.SetX(30);
    v2.SetY(40);

    cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;
    cout << "v2: (" << v2.GetX() << ", " << v2.GetY() << ")" << endl;

    v1.Add(v2);
    cout << "v1: (" << v1.GetX() << ", " << v1.GetY() << ")" << endl;

    return 0;
}
