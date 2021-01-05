/*
Q7
0에서 127까지 ASCII 코드와 해당 문자를 다음과 같이 출력하는 프로그램을 작성하라.
화면에 출력가능하지 않는 ASCII 코드는 '.'으로 출력하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

    int width = 6;

    cout << left;

    for (int i = 0; i < 4; i++) {
        cout << setw(width) << "dec";
        cout << setw(width) << "hexa";
        cout << setw(width) << "char";
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << setw(width) << "----";
        cout << setw(width) << "----";
        cout << setw(width) << "----";
    }
    cout << endl;

    for (int i = 0; i <= 60; i += 4) {
        for (int j = 0; j < 4; j++) {
            cout << setw(width) << dec << i + j;
            cout << setw(width) << hex << i + j;
            cout << setw(width) << dec << (isprint(i + j) ? char(i + j) : '.');
        }
        cout << endl;
    }

    return 0;
}
