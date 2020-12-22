// 참조 변수
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() { radius = 1; }
    void setRadius(int r) { this->radius = r; }
};

int main() {

/* 참조 변수 선언
  참조 변수는 이미 선언된 변수(원본 변수로 지칭)에 대한 별명으로서, 참조자(&)를 이용
  하여 선언하며, 선언시 반드시 '원본 변수로 초기화'하여야 한다. */
    int n = 2;
    int& refn = n;  // 참조 변수 refn 선언, refn은 n에 대한 별명, refn과 n은 동일한 변수

    Circle circle;
    Circle& refc = circle;  // 참조 변수 refc 선언, refc는 circle에 대한 별명. refc와 circle은 동일한 변수

/* 참조 변수 사용
  참조 변수를 사용하는 방법은 보통 변수와 동일하며, 참조 변수에 대한 사용은 바로 원본 변수의 사용이다.
  다음 예를 보자. */
    refn = 3;
    n = 5;  // n = 5, refn = 5가 됨
    refn++; // n = 6, refn = 6이 됨

/* 참조 변수는 포인터가 아니므로, 다음과 같이 사용하지 않도록 주의하라. */
//  refc->serRadius(30);    // 컴파일 오류
    refc.setRadius(30);     // 으로 해야함

/* 참조 변수에 대한 포인터를 만들 수 있다. 다음 코드를 보자. */
    int* p = &refn; // p는 refn의 주소값을 가리킴, refn은 n과 동일한 변수이므로 결과적으로 p는 n의 주소값을 가진다.
    *p = 20;        // n = 20; refn = 20

    return 0;
}
