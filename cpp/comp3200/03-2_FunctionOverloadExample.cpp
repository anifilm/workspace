#include <iostream>

using namespace std;

class Vector {
private:
    int mX;
    int mY;

public:
    Vector();
    Vector(int x, int y);

    int GetX() const;
    int GetY() const;
    void SetX(int x);
    void SetY(int y);

    bool IsEqual(const Vector& v) const;
    Vector Multiply(const Vector& v) const;
    Vector Multiply(int multiplier) const;

    void Scale(const Vector& v);
    void Scale(int multiplier);
};

Vector::Vector()
    : Vector(0, 0) {
}

Vector::Vector(int x, int y)
    : mX(x), mY(y) {
}

int Vector::GetX() const { return mX; }
int Vector::GetY() const { return mY; }
void Vector::SetX(int x) { mX = x; }
void Vector::SetY(int y) { mY = y; }

bool Vector::IsEqual(const Vector& v) const {
    return (mX == v.mX && mY == v.mY);
}

Vector Vector::Multiply(const Vector& v) const {
    Vector result(mX * v.GetX(), mY * v.GetY());
    return result;
}

Vector Vector::Multiply(int multiplier) const {
    Vector result(mX * multiplier, mY * multiplier);
    return result;
}

void Vector::Scale(const Vector &v) {
    mX *= v.mX;
    mY *= v.mY;
}

void Vector::Scale(int multiplier) {
    mX *= multiplier;
    mY *= multiplier;
}

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|  Function Overloading Example  |" << endl;
    cout << "+------------------------------+" << endl;

    Vector vector1(3, 5);
    Vector vector2(7, 9);
    const int multiplier = 3;

    cout << "vector1: " << vector1.GetX() << ", " << vector1.GetY() << endl;
    cout << "vector2: " << vector2.GetX() << ", " << vector2.GetY() << endl;

    Vector result = vector1.Multiply(vector2);
    cout << "vector1.Multiply(vector2): " << result.GetX() << ", " << result.GetY() << endl;

    result = vector1.Multiply(multiplier);
    cout << "vector1.Multiply(multiplier): " << result.GetX() << ", " << result.GetY() << endl;
    cout << "vecter1: " << vector1.GetX() << ", " << vector1.GetY() << endl;

    vector1.Scale(vector2);
    cout << "vector1.Scale(vector2)" << endl;
    cout << "vecter1: " << vector1.GetX() << ", " << vector1.GetY() << endl;

    vector1.Scale(multiplier);
    cout << "vector1.Scale(multiplier)" << endl;
    cout << "vecter1: " << vector1.GetX() << ", " << vector1.GetY() << endl;

    return 0;
}
