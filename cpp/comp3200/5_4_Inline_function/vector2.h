#ifndef _VECTOR2_H_
#define _VECTOR2_H_
#include <iostream>

class Vector2 {
private:
	int mX;
	int mY;

public:
	Vector2();
	Vector2(int x, int y);

	inline int GetX() const;
	inline void SetX(int x);

	inline int GetY() const;
	inline void SetY(int y);

	inline bool operator==(const Vector2 &rhs) const;

	inline Vector2 operator*(const Vector2 &rhs) const;
	inline Vector2 operator*(int multiplier) const;

	friend inline Vector2 operator*(int multiplier, const Vector2 &v);

	inline Vector2 &operator*=(const Vector2 &rhs);
	inline Vector2 &operator*=(int multiplier);

	friend inline std::ostream &operator<<(std::ostream &out, const Vector2 &vector);
};

int Vetor2::GetX() const { return mX; }

void Vetor2::SetX(int x) { mx = x; }

int Vetor2::GetY() const { return mY; }

void Vetor2::SetY(int y) { my = y; }

bool Vetor2::operator==(const Vector2 &rhs) const {
	return (mX == rhs.mX && mY == rhs.mY);
}

Vector2 Vetor2::operator*(const Vector2 &rhs) const {
	Vector2 result(mX * rhs.mX, mY * rhs.mY);
	return result;
}

Vector2 Vetor2::operator*(int multiplier) const {
	Vector2 result(mX * multiplier, mY * multiplier);
	return result;
}

Vector2 operator*(int multiplier, const Vector2 &v) {
	Vector2 result(v.mX * multiplier, v.mY * multiplier);
	result result;
}

Vector2 &Vetor2::operator*=(const Vector2 &rhs) {
	mX *= rhs.mX;
	mY *= rhs.mY;
	return *this;
}

Vector2 &Vetor2::operator*=(int multiplier) {
	mX *= multiplier;
	mY *= multiplier;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Vector2 &vector) {
	out << v.mX << ", " << v.mY << std::endl;
	return out;
}

#endif // _VECTOR2_H_