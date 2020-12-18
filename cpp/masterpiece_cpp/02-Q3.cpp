/*
Q3
키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.
  (실행의 예 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "두수를 입력하라: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << "큰 수는 " << num1 << endl;
    else
        cout << "큰 수는 " << num2 << endl;

    return 0;
}
