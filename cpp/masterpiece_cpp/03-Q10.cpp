/*
Q10
다수의 클래스를 선언하고 활용하는 간단한 문제이다. 더하기(+), 빼기(-), 곱하기(*),
나누기(/)를 수행하는 4개의 클래스 Add, Sub, Mul, Div를 만들고자 한다. 이들은 모두
공통으로 다음 멤버를 가진다.
 - int 타입 변수 a, b: 피연산자
 - void setValue(int x, int y) 함수: 매개 변수 x, y를 멤버 a, b에 복사
 - int calculate() 함수: 연산을 실행하고 결과 리턴

main() 함수는 Add, Sub, Mul, Div 클래스 타입의 객체 a, s, m, d를 생성하고, 아래와
같이 키보드로부터 두 개의 정수와 연산자를 입력받고, a, s, m, d 객체 중에서 연산을
처리할 객체의 setValue() 함수를 호출한 후, calculate()를 호출하여 결과를 화면에
출력한다. 프로그램은 무한 루프를 돈다.
  (실행 결과 생략...)

(1) 클래스의 선언부와 구현부를 분리하고, 모든 코드를 Calculator.cpp 파일에 작성하라.
(2) 클래스의 선언부와 구현부를 헤더 파일과 cpp 파일로 나누어 프로그램을 작성하라.
*/
#include <iostream>

using namespace std;

class Add {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Add::setValue(int x, int y) { a = x, b = y; }
int Add::calculate() { return a + b; }

class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Sub::setValue(int x, int y) { a = x, b = y; }
int Sub::calculate() { return a - b; }

class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Mul::setValue(int x, int y) { a = x, b = y; }
int Mul::calculate() { return a * b; }

class Div {
private:
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};
void Div::setValue(int x, int y) { a = x, b = y; }
int Div::calculate() { return a / b; }

int main() {

    Add a;
    Sub s;
    Mul m;
    Div d;

    int num1, num2, result;
    char op;

    while (true) {
        cout << "두 정수와 연산자를 입력하세요: ";
        cin >> num1;
        if (num1 == -1) { cout << "\n프로그램을 종료합니다." << endl; break; }
        cin >> num2 >> op;

        switch (op) {
            case '+':
                a.setValue(num1, num2);
                result = a.calculate();
                break;
            case '-':
                s.setValue(num1, num2);
                result = s.calculate();
                break;
            case '*':
                m.setValue(num1, num2);
                result = m.calculate();
                break;
            case '/':
                d.setValue(num1, num2);
                result = d.calculate();
                break;
            default:
                cout << "다시 입력하세요!" << endl;
                continue;
        }
        cout << result << endl;
    }

    return 0;
}
