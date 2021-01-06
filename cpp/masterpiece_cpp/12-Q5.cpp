/*
Q5
C++ 소스 파일에서 //로 구성된 주석무을 빼고 출력하는 프로그램을 작성하라. "//"와 같이
문자열 속에 //가 있는 경우는 없는 것으로 가정한다. .cpp 파일을 하나 준비하여 소스 폴더
에 놓고 테스트하라. 저자는 정답 소스 파일로 하였다.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-Q5_ShowNoComment.cpp");
    if (!fin) {
        cout << "파일 열기 실패" << endl;
        return 0;
    }

    int ch;
    bool found = false;
    while((ch = fin.get()) != EOF) {  // EOF를 만날 때까지 읽음
        if (ch == '/') {
            if (found == false)
                found = true;
            else {
                fin.ignore(100, '\n');
                cout.put('\n');
                found = false;
            }
        }
        else {
            if (found == true) {
                cout << '/';
                found = false;
            }
            cout.put(ch);
        }
    }

    fin.close();  // 파일 닫기
}
