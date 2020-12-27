/* 이론 문제
Q16
다음 클래스들의 상속 관계가 가진 잠재적 문제점을 지적하고 수정하라.
*/
#include <iostream>

using namespace std;

class TV {
public:
    int screenSize;
};

class ColorTV : public TV {
public:
    int color;
};

class InternetTV : public TV {
public:
    string ipAddr;
};

/* TV의 멤버 변수 screenSize에 대해 TV 클래스가 다중 상속으로 인한 모호함의 발생
   가능성 존재 */
