// 정보은닉의 이해
#include <iostream>
#include "04-1_2_Point.h"
#include "04-1_2_Rectangle.h"

using namespace std;

int main() {

    Point pos1;
    if (!pos1.InitMembers(-2, 4))
        cout << "pos1 초기화 실패" << endl;
    else
        cout << "pos1 초기화" << endl;
    if (!pos1.InitMembers(2, 4))
        cout << "pos1 초기화 실패" << endl;
    else
        cout << "pos1 초기화" << endl;

    Point pos2;
    if (!pos2.InitMembers(5, 9))
        cout << "pos2 초기화 실패" << endl;
    else
        cout << "pos2 초기화" << endl;

    Rectangle rec;
    if (!rec.InitMembers(pos2, pos1))
        cout << "첫번째 직사각형 초기화 실패" << endl;
    else
        cout << "첫번째 직사각형 초기화 완료" << endl;
    if (!rec.InitMembers(pos1, pos2))
        cout << "두번재 직사각형 초기화 실패" << endl;
    else
        cout << "두번째 직사각형 초기화 완료" << endl;

    rec.ShowRecInfo();

    return 0;
}
