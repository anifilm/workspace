/*
Q15
덧셈(+), 뺄셈(-), 곱셉(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램
을 작성하라. 식은 다음과 같은 형식으로 입력된다. 정수와 연산자는 하나의 빈칸으로 분리
된다.
  (실행의 예 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    int num1, num2, result;
    char op;

    while (true) {
    cout << "? ";
    cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) { cout << "오류! 0으로 나눌 수 없습니다.\n"; continue; }
                result = num1 / num2;
                break;
            case '%':
                result = num1 % num2;
                break;
            default:
                cout << "다시 입력하세요!" << endl; continue;
        }
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }

    return 0;
}
