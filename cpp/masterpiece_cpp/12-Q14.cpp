/*
Q14
read() 함수를 이용하여 system.ini 파일의 크기를 화면에 출력하는 프로그램을 작성하라.
이때 get() 함수나 seekg(), tellg() 함수를 사용하면 안된다.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* file = "12-Q2_system.ini";

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
    cout << endl;

    cout << file << " 파일의 크기는 " << count << "바이트 입니다." << endl;

    fin.close();  // 입력 파일 닫기
}
