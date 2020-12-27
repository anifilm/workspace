// Adder와 Subtactor를 다중 상속받는 Calculator 클래스 작성
#include <iostream>

using namespace std;

class Adder {
protected:
    int add(int a, int b) { return a + b;}
};

class Subtactor {
protected:
    int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, public Subtactor {
public:
    int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
    int res = 0;
    switch (op) {
        case '+':
            res = add(a, b);    // Adder의 add() 호출
            break;
        case '-':
            res = minus(a, b);  // Subtactor의 minus() 호출
            break;
    }
    return res;
}

int main() {

    Calculator handCalculator;
    cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
    cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;

    return 0;
}
