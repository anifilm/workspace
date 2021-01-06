/*
Q3
영문 텍스트 파일을 읽고 영문 글자를 모두 대문자로 출력하라. system.ini로 테스트 하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-Q2_system.ini");
    if (!fin) {
        cout << "system.ini 열기 실패" << endl;
        return 0;
    }

    int ch;
    while((ch = fin.get()) != EOF) {  // EOF를 만날 때까지 읽음
        ch = toupper(ch);  // 읽은 문자를 대문자로 변환
        cout << char(ch);  // 문자를 화면에 출력
    }

    fin.close();  // 파일 닫기
}
