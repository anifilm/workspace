// 지역 변수 이해하기
#include <iostream>

using namespace std;

int Temp1(const int arg) {
    int number = 20;
    return number + 1;
}

int Temp2(const int arg) {
    int number = arg;
    return number + 1;
}

int main() {

    int number = 10;

    int rtn1 = Temp1(number);
    int rtn2 = Temp2(number);

    cout << "메인함수 number: " << number << endl;
    cout << "Temp1함수 number: " << rtn1 << endl;
    cout << "Temp2함수 number: " << rtn2 << endl;

    return 0;
}
