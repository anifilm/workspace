/*
다음 프로그램의 실행 결과는 무엇인가?
*/
#include <iostream>

using namespace std;

int main() {

    string a("Hello C++");
    cout << a.length() << endl;     // length = 9
    a.append("!!");
    cout << a << endl;              // a = "Hello C++!!"
    cout << a.at(6) << endl;        // a.at(6) = 'C'
    cout << a.find("C") << endl;    // a.find("C") = 6
    int n = a.find("+++");
    cout << n << endl;              // n = -1
    a.erase(1, 3);
    cout << a << endl;              // a = "Ho C++!!"

    return 0;
}
