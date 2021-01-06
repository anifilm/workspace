// get()을 이용한 텍스트 파일 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* file = "./12-3_system.ini";  // 읽을 파일명
    ifstream fin(file);
    if (!fin) {
        cout << file << "열기 오류" << endl;
        return 0;
    }

    int count = 0;
    int ch;
    while((ch = fin.get()) != EOF) {  // EOF를 만날 때까지 읽음
        cout << char(ch);  // 읽은 문자를 화면에 출력
        count++;  // 읽은 문자 개수 카운트
    }

    cout << "\n읽은 바이트 수는 " << count << endl;

    fin.close();  // 파일 닫기
}

/*

텍스트 I/O 모드로 열기

const char* file = "filename.txt";  // 텍스트 파일
ifstream fin;    // 파일 입력 스트림 객체 생성
fin.open(file);  // 텍스트  I/O로 파일 열기
...
ofstream fout(file);  // 파일 출력 스트림을 생성하고, 테스트 I/O로 파일 열기


get()과 put()을 이용한 텍스트 I/O

텍스트 I/O 모드인 경우, get()은 파일에서 문자 한 개를 읽고, put()은 문자 한 개를
파일에 기록한다.

int get()
  파일에서 문자 하나(한 바아트) 읽어 반환. 파일의 끝에서 읽으면 EOF(-1)을 반환

ostream& put(char ch)
  파일에 문자 ch 기록

*/
