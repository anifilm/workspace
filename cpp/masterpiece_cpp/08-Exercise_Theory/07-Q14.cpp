/* 이론 문제
Q14
다음 클래스가 있을 때 물음에 답하라.
*/
#include <iostream>

using namespace std;

class Pen {
// ...
};

class Eraser {
// ...
};

class Lock {
// ...
};

/* (1) 클래스 Pen과 클래스 Eraser를 동시에 상속받는 클래스 HiPen을 선언하라. */
class HiPen : public Pen, public Eraser {
// ...
};

/* (2) 클래스 Pen, Eraser, Lock을 동시에 상속받는 클래스 OmniPen을 선언하라. */
class OmniPen : public Pen, public Eraser, public Lock {
// ...
};
