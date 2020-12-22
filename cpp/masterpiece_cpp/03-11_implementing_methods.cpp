// 헤더 파일과 cpp 파일로 분리하기
#include <iostream>

using namespace std;

class Adder {   // 덧셈 모듈 클래스
private:
    int op1, op2;
public:
    Adder(int a, int b);
    int process();
};

Adder::Adder(int a, int b) {
    op1 = a; op2 = b;
}

int Adder::process() {
    return op1 + op2;
}

class Calulator {   // 계산기 클래스
public:
    void run();
};

void Calulator::run() {
    int a, b;
    cout << "두 개의 수를 입력하세요: ";
    cin >> a >> b;      // 정수 두 개 입력
    Adder adder(a, b);       // 덧셈기 생성
    cout << adder.process(); // 덧셈 계산
}

int main() {

    Calulator calc; // calc 객체 생성
    calc.run();     // 계산기 시작

    return 0;
}
