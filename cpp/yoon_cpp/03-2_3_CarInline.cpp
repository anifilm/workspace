// 인라인 함수는 헤더파일에 함게 넣어야 해요.
#include <iostream>
#include <cstring>
#include "03-2_3_CarInline.h"

using namespace std;

void Car::InitMember(char* ID, int fuel) {
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
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
