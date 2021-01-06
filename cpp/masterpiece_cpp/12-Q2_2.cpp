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

    string line;
    int count = 1;
    while (getline(fin, line)) {  // fin 파일에서 한 라인 읽기
        cout << count << " : " << line << endl;  // 라인 출력
        count++;
    }

    fin.close();
}
