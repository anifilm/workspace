// 멤버 이니셜라이저 (Member Initializer)를 이용한 멤버 초기화
#include <iostream>
#include "04-3_4_Point.h"
#include "04-3_4_Rectangle.h"

using namespace std;

int main() {

    Rectangle rec {1, 1, 5, 5};
    rec.ShowRecInfo();

    return 0;
}
