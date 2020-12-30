/* 문제 07-1 [상속과 생성자의 호출]
문제 1
앞서 상속관계에 높여있는 클래스의 생성자 정의 및 호출 방식에 대해 설명하였다. 이 내용을
바탕으로 다음 클래스에 적절한 생성자를 삽입해 보자. 그리고 이의 확인을 위한 main() 함수
를 적절히 정의해 보자.
*/
#include <iostream>

using namespace std;

class Car {  // 기본 연료 자동차
private:
    int gasolineGauge;
public:
    Car(int g) : gasolineGauge(g) {}
    int GetGasGauge() {
        return gasolineGauge;
    }
};

class HybridCar : public Car {  // 하이브리드 자동차
private:
    int electricGauge;
public:
    HybridCar(int g, int e) : Car(g), electricGauge(e) {}
    int GetElecGauge() {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar {  // 하이브리드 워터카
private:
    int waterGauge;
public:
    HybridWaterCar(int g, int e, int w) : HybridCar(g, e), waterGauge(w) {}
    void ShowCurrentGauge() {
        cout << "잔여 가솔린: " << GetGasGauge() << endl;
        cout << "잔여 전기량: " << GetElecGauge() << endl;
        cout << "잔여 워터량: " << waterGauge << endl;
    }
};

/*
참고로, Car 클래스는 가솔린으로 동작하는 자동차를 표현한 것이고, HybridCar 클래스에
가솔린과 전기로 동작하는 자동차를 표현한 것이다. 그리고 마지막으로 HybridWaterCar
클래스는 가솔린과 전기뿐만 아니라, 물도 동시에 연료로 사용할 수 있는, 가상의 자동차를
표현한 것이다. 그러나 이 문제는 위의 클래스들이 의미하는 바를 몰라도 해결이 가능하다.
*/

int main() {

    HybridWaterCar wCar(81, 64, 32);
    wCar.ShowCurrentGauge();

    return 0;
}
