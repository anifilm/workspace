/*
Q2
istream& get(char& ch) 함수를 이용하여 한 라인을 읽고 빈칸(' ')이 몇 개인지 출력하는
프로그램을 작성하라.

*/
#include <iostream>

using namespace std;

int main() {

    char ch; int count = 0;
    while (true) {
        cin.get(ch);  // 키를 ch에서 읽어옴
        if (cin.eof()) break;  // EOF 문자 (ctrl + z) 키가 입력된 경우, 읽기 종료
        if (ch == ' ') count++;
        cout.put(ch);  // 읽은 문자 출력
        if (ch == '\n') break;  // <Enter> 키가 입력된 경우 읽기 중단
    }
    cout << "\n입력된 문자열에서 공백이 " << count << "개 있습니다." << endl;

    return 0;
}
