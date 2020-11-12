// 자효형 bool
#include <iostream>

using namespace std;

bool IsPositive(int num) {      // bool도 기본 자효형이기 때문에 함수의 반환형으로도 선언이 가능하다.
    if (num <= 0)
        return false;
    else
        return true;
}

int main() {

    bool isPos;                 // bool형 변수를 선언
    int num;
    cout << "Input number: ";
    cin >> num;

    isPos = IsPositive(num);    // 함수 IsPositive가 반환하는 bool형 데이터를 저장하고 있다.
    if (isPos)
        cout << "Positive number" << endl;
    else
        cout << "Negative number" << endl;

    return 0;
}
