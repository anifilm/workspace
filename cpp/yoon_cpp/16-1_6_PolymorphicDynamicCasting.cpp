// dynamic_cast 두 번째 이야기: Polymorphic 클래스 기반의 형 변환
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

	SoSimple* simPtr = new SoComplex;
	SoComplex* comPtr = dynamic_cast<SoComplex*>(simPtr);
	comPtr->ShowSimpleInfo();

	return 0;
}
