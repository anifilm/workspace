/* 문제 03-2 [클래스의 정의]
문제 1
계산기 기능의 Calculator 클래스를 정의해 보자. 기본적으로 지니는 기능은 덧셈, 뺄셈, 곱셈
그리고 나눗셈이며, 연사을 할 때마다 어떠한 연산을 몇 번 수행했는지 기록되어야 한다.
아래의 main 함수와 실행의 예에 부합하는 Calculator 클래스를 정의하면 된다. 단, 멤버변수
는 pricate으로, 멤버함수는 public으로 선언하자. 이렇게 선언하는 이유에 대해서는 다음
Chapter에서 자세히 언급한다.

int main(void) {
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}

[실행의 예]
3.2 + 2.4 = 5.6
3.5 / 1.7 = 2.05882
2.2 - 1.5 = 0.7
4.9 / 1.2 = 4.08333
덧셈: 1 뺄셈: 1 곱셈: 0 나눗셈: 2
*/
#include <iostream>

using namespace std;

class Calculator {
private:
    int countAdd;
    int countMin;
    int countMul;
    int countDiv;
public:
    void Init();
    double Add(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    double Div(double num1, double num2);
    void ShowOpCount();
};

void Calculator::Init() {
    countAdd = countMin = countMul = countDiv = 0;
}

double Calculator::Add(double num1, double num2) {
    countAdd++;
    return num1 + num2;
}

double Calculator::Min(double num1, double num2) {
    countMin++;
    return num1 - num2;
}

double Calculator::Mul(double num1, double num2) {
    countMul++;
    return num1 * num2;
}

double Calculator::Div(double num1, double num2) {
    countDiv++;
    return num1 / num2;
}

void Calculator::ShowOpCount() {
    cout << "덧셈: " << countAdd << ' ';
    cout << "뺄셈: " << countMin << ' ';
    cout << "곱셈: " << countMul << ' ';
    cout << "나눗셈: " << countDiv << endl;
}


int main(void) {

    Calculator cal;
    cal.Init();

    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;

    cal.ShowOpCount();

    return 0;
}
