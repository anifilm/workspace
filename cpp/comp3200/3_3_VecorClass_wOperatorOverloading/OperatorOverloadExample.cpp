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

	bool operator==(const Vector &rhs) const;

	Vector operator*(const Vector &rhs) const;
	Vector operator*(int multiplier) const;

	friend Vector operator*(int multiplier, const Vector &v);

	Vector &operator*=(const Vector &rhs);
	Vector &operator*=(int multiplier);

	friend std::ostream &operator<<(std::ostream &out, const Vector &v);
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

bool Vector::operator==(const Vector &rhs) const {
	return (mX == rhs.mX && mY == rhs.mY);
}

Vector Vector::operator*(const Vector &rhs) const {
	Vector result(mX * rhs.mX, mY * rhs.mY);
	return result;
}
Vector Vector::operator*(int multiplier) const {
	Vector result(mX * multiplier, mY * multiplier);
	return result;
}

Vector operator*(int multiplier, const Vector &v) {
	Vector result(v.mX * multiplier, v.mY * multiplier);
	return result;
}

Vector &Vector::operator*=(const Vector &rhs) {
	mX *= rhs.mX;
	mY *= rhs.mY;

	return *this;
}
Vector &Vector::operator*=(int multiplier) {
	mX *= multiplier;
	mY *= multiplier;

	return *this;
}

std::ostream &operator<<(std::ostream &out, const Vector &v) {
	out << v.mX << ", " << v.mY << endl;
	return out;
}

int main() {

	cout << "+------------------------------+" << endl;
	cout << "| Operator Overloading Example |" << endl;
	cout << "+------------------------------+" << endl;

	Vector vector1(3, 5);
	Vector vector2(7, 9);

	const int multiplier = 3;

	cout << "vector1: " << vector1 << endl;
	cout << "vector2: " << vector2 << endl;

	Vector result = vector1 * vector2;
	cout << "vector1 * vector2: " << result << endl;

	result = vector1 * multiplier;
	cout << "vector1 * multiplier: " << result << endl;
	cout << "vector1: " << vector1 << endl;

	result = multiplier * vector1;
	cout << "multiplier * vector1: " << result << endl;
	cout << "vector1: " << vector1 << endl;

	vector1 *= vector2;
	cout << "vector1 *= Vector2" << endl;
	cout << "vector1: " << vector1 << endl;

	vector1 *= multiplier;
	cout << "vector1 *= multiplier" << endl;
	cout << "vector1: " << vector1 << endl;
}