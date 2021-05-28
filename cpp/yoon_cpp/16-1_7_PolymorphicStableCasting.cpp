// 정말 마지막까지 골치 아프게 하는군요.
#include <iostream>

using namespace std;

class SoSimple {
public:
	virtual void ShowSimpleInfo() {
		cout << "SoSimple Base Class" << endl;
	}
};

class SoComplex : public SoSimple {
public:
	void ShowSimpleInfo() {
		cout << "SoComplex Derived Class" << endl;
	}
};

int main() {

	SoSimple* simPtr = new SoSimple;
	SoComplex* comPtr = dynamic_cast<SoComplex*>(simPtr);
	if (comPtr == NULL)
		cout << "형 변환 실패" << endl;
	else
		comPtr->ShowSimpleInfo();

	return 0;
}
