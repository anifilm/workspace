/*
Q10
다음은 프로그램과 실행 결과를 보여준다. prompt 조작자를 작성하여 프로그램을 완성하라.
  (프로그램, 실행 결과 생략...)

*/
#include <iostream>
#include <string>

using namespace std;

istream& prompt(istream& ins) {
    cout << "암호는? ";
    return ins;
}

int main() {

    string password;
    while (true) {
        cin >> prompt >> password;
        if (password == "C++") {
            cout << "login success!!" << endl;
            break;
        }
        else
            cout << "login fail. try again!!" << endl;
    }

    return 0;
}
