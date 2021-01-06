// istream의 getline()을 이용하여 텍스트 파일을 읽고 화면 출력
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-3_system.ini");
    if (!fin) {
        cout << "system.ini 열기 실패" << endl;
        return 0;
    }

    char buf[81];  // 한 라인에 최대 80개의 문자로 구성된다고 가정
    while (fin.getline(buf, 81)) {  // 한 라인에 최대 80개의 문자로 구성. 끝에 '\0' 문자 추가
        cout << buf << endl;  // 라인 출력
    }

    fin.close();
}

/*

텍스트 파일의 줄 단위 읽기

- char 사용시
istream getline(char* line, int n)

- string 사용시
ifstream& getline(ifstream& fin, string& line)

*/
