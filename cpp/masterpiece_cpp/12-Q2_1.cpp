/*
Q2
system.ini 파일을 읽고 라인 번호를 다음과 같이 붙여 화면에 출력하는 프로그램을 작성하라.

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

    char buf[81];  // 한 라인에 최대 80개의 문자로 구성된다고 가정
    int count = 1;
    while (fin.getline(buf, 81)) {  // 한 라인에 최대 80개의 문자로 구성. 끝에 '\0' 문자 추가
        cout << count << " : " << buf << endl;  // 라인 출력
        count++;
    }

    fin.close();
}
