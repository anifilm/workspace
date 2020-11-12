// 인라인 함수는 헤더파일에 함게 넣어야 해요.
#include "03-2_3_CarInline.h"

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
