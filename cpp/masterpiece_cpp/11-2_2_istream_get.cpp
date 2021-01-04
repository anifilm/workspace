// get(char&)을 이용한 한 줄의 문자 읽기
#include <iostream>

using namespace std;

int main() {

    cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다.\n" << endl;

    char ch;
    while (true) {
        cin.get(ch);  // 키를 ch에서 읽어옴
        if (cin.eof()) break;  // EOF 문자 (ctrl + z) 키가 입력된 경우, 읽기 종료
        cout.put(ch);  // 읽은 문자 출력
        if (ch == '\n') break;  // <Enter> 키가 입력된 경우 읽기 중단
    }

    return 0;
}

/*

문자 입력 2

istream& get(char& ch)
  입력 스트림에서 문자를 읽어 ch에 저장. 현재 입력 스트림 객체 (*this)의 참조를 반환.
  오류나 EOF를 만나면, 스트림 내부의 오류 플래그 (failbit) 세팅

*/
