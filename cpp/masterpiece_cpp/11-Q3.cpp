/*
Q3
한 줄에 '영어문장;한글문자' 형식으로 키 입력될 때, cin.ignore()를 이용하여 ';'이후에 입력
된 문자열을 화면에 출력하는 프로그램을 작성하라. 아래에서 ^Z(ctrl+z) 키는 입력 종료를 나타
내는 키이며, cin.get()은 EOF를 반환한다.
  (실행결과 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    int ch;
    cin.ignore(100, ';');
    while ((ch = cin.get()) != EOF) {  // 키보드에서 문자 읽기
        cout.put(ch);  // 읽은 문자 출력
        if (ch == '\n') cin.ignore(100, ';');
    }

    return 0;
}
