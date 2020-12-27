/* 이론 문제
Q15
다음 4개의 클래스가 있다.
*/
#include <iostream>

using namespace std;

class Vehicle {
public:
    int power;
};

class Car : virtual public Vehicle {
public:
    int color;
};

class Airplane : virtual public Vehicle {
public:
    int altitude;
};

class FlyingCar : public Car, public Airplane {
public:
    void go();
};

/* 다음 코드 중에서 컴파일 오류가 발생하는 라인을 발견하고 오류를 수정하라.
   컴파일 오류의 원인이 무엇인지 설명하라. */

int main() {

    FlyingCar fCar;
    fCar.go();
    fCar.altitude = 2000;
    fCar.color = 2000;
    fCar.power = 2000;  // 다중 상속으로 인한 매개 변수 power의 모호함 발생

    return 0;
}
