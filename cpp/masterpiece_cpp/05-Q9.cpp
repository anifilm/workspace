/*
Q9
클래스 Accumulator는 add() 함수를 통해 계속 값을 누적하는 클래스로서, 다음과 같이
선언된다. Accumulator 클래스를 구현하라.
  (Accumulator 클래스 생략...)

Accumulator는 다음과 같이 main() 함수에 의해 활용된다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Accumulator {
private:
    int value;
public:
    Accumulator(int value);   // 매개 변수 value로 멤버 value를 초기화 한다.
    Accumulator& add(int n);  // value에 n을 더해 값을 누적한다.
    int get();  // 누적된 값 value를 리턴한다.
};

Accumulator::Accumulator(int value) {
    this->value = value;
}

Accumulator& Accumulator::add(int n) {
    value += n;
    return *this;
}

int Accumulator::get() {
    return value;
}

int main() {

    Accumulator acc(10);
    acc.add(5).add(6).add(7);   // acc의 value 멤버가 28이 된다.
    cout << acc.get() << endl;  // 28 출력

    return 0;
}
