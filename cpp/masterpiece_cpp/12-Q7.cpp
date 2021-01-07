/*
Q7
텍스트 파일이든 바이너리 파일이든 원본 파일을 바이트 단위로(문자 단위가 아님에 유의)
거꾸로 사본에 저장하는 프로그램을 작성하라. system.ini 파일을 원본으로 하고 system.txt
파일로 저장하여 테스트 하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 소스 파일과 목적 파일의 이름
    const char* srcFile = "12-Q7_system.ini";
    const char* destFile = "12-Q7_system.txt";

    // 소스 파일 열기
    ifstream fin(srcFile, ios::in | ios::binary);  // 바이너리 I/O, 읽기 모드로 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << srcFile << " 열기 오류" << endl;
        return 0;
    }

    // 목적 파일 열기
    ofstream fout(destFile, ios::out | ios::binary);  // 바이너리 I/O, 쓰기 모드로 파일 열기
    if (!fout) {  // 열기 실패 검사
        cout << destFile << " 열기 오류" << endl;
        return 0;
    }

    // 소스 파일에서 목적 파일로 복사하기
    fin.seekg(0, ios::end);  // get pointer를 파일의 EOF 위치로 이동
    int fileSize = fin.tellg();  // 파일 크기를 반환
    int ch;
    for (int i = 0; i < fileSize; i++) {
        fin.seekg(fileSize-1-i, ios::beg);  // 파일의 처음을 기준으로 get pointer 이동
        ch = fin.get();  // 소스 파일을 끝부터 한 바이트씩 읽는다.
        fout.put(ch);    // 읽은 바이트를 파일에 출력한다.
    }
    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;

    fin.close();
    fout.close();
}
