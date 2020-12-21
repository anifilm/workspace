/*
Q4
소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    double num1, num2, num3, num4, num5;

    cout << "5개의 실수를 입력하라: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    double max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;
    if (num5 > max) max = num5;

    cout << "제일 큰 수는 " << max << endl;

    return 0;
}
