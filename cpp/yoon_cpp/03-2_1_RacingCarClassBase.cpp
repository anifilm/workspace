/* 접근제어 지시자 (접근제어 레이블)
 - public       어디서든 접근허용
 - protected    상속관계에 높여있을 때, 유도 클래스에서의 접근허용
 - private      클래스 내 (클래스 내에 정의된 함수)에서만 접근허용
*/
#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST {
    enum {
        ID_LEN    = 20,
        MAX_SPD   = 200,
        FUEL_STEP = 2,
        ACC_STEP  = 10,
        BRK_STEP  = 10
    };
}

class Car {
private:
    char gamerID[CAR_CONST::ID_LEN];    // 소유자ID
    int fuelGauge;                      // 연료량
    int curSpeed;                       // 현재속도
public:
    void InitMember(char* ID, int fuel);
    void ShowCarState();    // 상태정보 출력
    void Accel();           // 엑셀, 속도증가
    void Break();           // 브레이크, 속도감소
};

void Car::InitMember(char* ID, int fuel) {
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState() {
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl;
    cout << endl;
}

void Car::Accel() {
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
    if (curSpeed < CAR_CONST::BRK_STEP) {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}

int main() {

    Car run99;
    run99.InitMember("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77;
    sped77.InitMember("sped77", 100);
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();

    return 0;
}
