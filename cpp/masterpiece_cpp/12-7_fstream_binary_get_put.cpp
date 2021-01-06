// get()과 put()을 이용한 이미지 파일 복사
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 소스 파일과 목적 파일의 이름
    const char* srcFile = "12-7_mygirl.jpg";
    const char* destFile = "12-7_mygirl_copy.jpg";

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
    int ch;
    while ((ch = fsrc.get()) != EOF) {  // 소스 파일을 끝까지 한 바이트씩 읽는다.
        fdest.put(ch);  // 읽은 바이트를 파일에 출력한다.
    }
    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;

    fsrc.close();
    fdest.close();
}
