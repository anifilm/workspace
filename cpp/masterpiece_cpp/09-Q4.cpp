/*
Q4
LoopAdder 클래스를 상속받아 다음 main() 함수와 실행 결과처럼 되도록 WhileLoopAdder,
DoWhileLoopAdder 클래스를 작성하라. while문, do-while문을 이용하여 합을 구하도록
calculate() 함수를 각각 작성하면 된다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class LoopAdder {  // 추상 클래스
private:
    string name;   // 루프의 이름
    int x, y, sum; // x에서 y까지의 합은 sum
    void read();   // x, y 값을 읽어 들이는 함수
    void write();  // sum을 출력하는 함수
protected:
    LoopAdder(string name = "") {  // 루프의 이름을 받는다. 초기값은 ""
        this->name = name;
    }
    int getX() { return x; }
    int getY() { return y; }
    virtual int calculate() = 0;  // 순수 가상 함수. 루프를 돌며 합을 구한 함수
public:
    void run();  // 연산을 진행하는 함수
};

void LoopAdder::read() {  // x, y 입력
    cout << name << ": " << endl;
    cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요: ";
    cin >> x >> y;
}

void LoopAdder::write() {  // 결과 sum 출력
    cout << x << "에서 " << y << "까지의 합은 " << sum << "입니다." << endl;
}

void LoopAdder::run() {
    read();   // x, y를 읽는다.
    sum = calculate();  // 루프를 돌면서 계산한다.
    write();  // 결과 sum을 출력한다.
}

class WhileLoopAdder : public LoopAdder {
public:
    WhileLoopAdder(string name) : LoopAdder(name) {}
    virtual int calculate() {
        int sum = 0;
        int i = getX();
        while (i <= getY()) {
            sum += i;
            i++;
        }
        return sum;
    }
};

class DoWhileLoopAdder : public LoopAdder {
public:
    DoWhileLoopAdder(string name) : LoopAdder(name) {}
    virtual int calculate() {
        int sum = 0;
        int i = getX();
        do {
            sum += i;
            i++;
        }
        while (i <= getY());
        return sum;
    }
};

int main() {

    WhileLoopAdder whileLoop("While Loop");
    DoWhileLoopAdder doWhileLoop("Do While Loop");

    whileLoop.run();
    doWhileLoop.run();

    return 0;
}
