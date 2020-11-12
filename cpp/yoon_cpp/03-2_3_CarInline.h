// 인라인 함수는 헤더파일에 함게 넣어야 해요.
#ifndef __CARINLINE_H__
#define __CARINLINE_H__

#include <iostream>

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


inline void Car::ShowCarState() {
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl;
    cout << endl;
}

inline void Car::Break() {
    if (curSpeed < CAR_CONST::BRK_STEP) {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}

#endif
