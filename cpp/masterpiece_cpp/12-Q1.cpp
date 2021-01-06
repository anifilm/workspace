/*
Q1
메모장을 이용하여 test.txt 파일을 다음과 같이 편집한 후, 이 파일을 읽어 출력하는
프로그램을 작성하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* file = "./12-Q1_test.txt";  // 읽을 파일명
    ifstream fin(file);
    if (!fin) {
        cout << file << "열기 오류" << endl;
        return 0;
    }

    int ch;
    while((ch = fin.get()) != EOF) {  // EOF를 만날 때까지 읽음
        cout << char(ch);  // 읽은 문자를 화면에 출력
    }
    cout << endl;

    fin.close();  // 파일 닫기
}
