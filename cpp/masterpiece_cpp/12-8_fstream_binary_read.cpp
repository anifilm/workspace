// read()를 이용하여 블록 단위로 텍스트 파일 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* file = "12-3_system.ini";

    ifstream fin;
    fin.open(file, ios::in | ios::binary);  // 바이너리 I/O, 읽기 모드로 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << "파일 열기 오류";
        return 0;
    }

    int count = 0;
    char buf[32];  // 블록 단위로 읽어들일 버퍼
    while (!fin.eof()) {  // 파일 끝까지 읽는다.
        fin.read(buf, 32);     // 최대 32바이트를 읽어 배열 buf에 저장
        int n = fin.gcount();  // 실제 읽은 바이트 수 알아냄
        cout.write(buf, n);    // 버퍼에 있는 n개의 바이트를 화면에 출력
        count += n;
    }
    cout << "\n읽은 바이트 수는 " << count << endl;

    fin.close();  // 입력 파일 닫기
}

/*

read() / write()로 블록 단위 파일 입출력

get()과 put()은 한 바이트 단위로 입출력을 수행하지만, read()와 write()는 블록 단위로
입출력 한다.

istream& read(char* s, int n)
  파일에서 최대 n개의 바이트를 배열 s에 읽어 들임. 파일의 끝을 만나면 읽기 중단

ostream& write(char* s, int n);
  배열 s에 있는 처음 n개의 바이트를 파일에 저장

int gcount()
  최근에 파일에서 읽은 바이트 수를 반환

*/
