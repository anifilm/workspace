#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

using namespace std;

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
