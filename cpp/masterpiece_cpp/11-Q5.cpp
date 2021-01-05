/*
Q5
다음 프로그램은 예제 11-3의 코드이다 아래 코드에서 char[] 대신 string을 이용하여
문자열을 다루도록 프로그램을 재작성하라.
  (실행결과 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    cout << "cin.get(char*, int)로 문자열을 읽습니다.\n" << endl;

    string cmd;
    while (true) {
        cout << "종료하려면 exit을 입력하세요: ";
        getline(cin, cmd);
        if (cmd == "exit") break;
    }
    cout << "\n프로그램을 종료합니다." << endl;

    return 0;
}
