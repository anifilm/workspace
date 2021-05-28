// 모기를 잡으려면 모기약을 써야지 사람 잡는 약을 쓰면 되나!
#include <iostream>

using namespace std;

class Car {
private:
	int fuelGauge;

public:
	Car(int fuel) : fuelGauge(fuel) { }
	void ShowCarState() {
		cout << "잔여 연료량: " << fuelGauge << endl;
	}
};

class Truck : public Car {
private:
	int freightWeight;
public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight) {
    }
	void ShowTruckState() {
		ShowCarState();
		cout << "화물의 무게: " << freightWeight << endl;
	}
};

int main() {

	Car* pcar1 = new Truck(80, 200);
	Truck* ptruck1 = (Truck*)pcar1; // 문제 없어 보이는 형 변환
	ptruck1->ShowTruckState();
	cout << endl;

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = (Truck*)pcar2; // 문제가 바로 보이는 형 변환
	ptruck2->ShowTruckState();

	return 0;
}
