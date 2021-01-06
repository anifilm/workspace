// read() / write()로 이미지 파일 복사
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 소스 파일과 목적 파일의 이름
    const char* srcFile = "12-7_mygirl.jpg";
    const char* destFile = "12-9_mygirl_copy.jpg";

    // 소스 파일 열기
    ifstream fsrc(srcFile, ios::in | ios::binary);  // 바이너리 I/O, 읽기 모드로 파일 열기
    if (!fsrc) {  // 열기 실패 검사
        cout << srcFile << " 열기 오류" << endl;
        return 0;
    }

    // 목적 파일 열기
    ofstream fdest(destFile, ios::out | ios::binary);  // 바이너리 I/O, 쓰기 모드로 파일 열기
    if (!fdest) {  // 열기 실패 검사
        cout << destFile << " 열기 오류" << endl;
        return 0;
    }

    // 소스 파일에서 목적 파일로 복사하기
    char buf[1024];
    while (!fsrc.eof()) {  // 소스 파일을 끝까지 읽는다.
        fsrc.read(buf, 1024);   // 최대 1024바이트를 읽어 배열 buf에 저장
        int n = fsrc.gcount();  // 실제 읽은 바이트 수 알아냄
        fdest.write(buf, n);    // 읽은 바이트 수 만큼 버퍼에서 목적 파일에 기록
    }
    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;

    fsrc.close();
    fdest.close();
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
