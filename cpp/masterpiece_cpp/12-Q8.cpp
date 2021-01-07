/*
Q8
system.ini 파일을 읽어 아래와 같이 Edit plus처럼 16진수와 문자로 출력하는 프로그램을
작성하라.

*/
#include <iostream>
#include <iomanip>
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

    cout << file << " 출력\n" << endl;

    int ch, buf[17];
    int readCount = 0;  // 줄 바꿈 조건을 검사하기 위한 카운트 변수
    while ((ch = fin.get()) != EOF) {  // 파일을 끝까지 읽음
        readCount++;
        if (readCount <= 16) {
            cout << setw(2) << setfill('0');
            cout << hex << ch << ' ';  // 16진수로 출력
            buf[readCount] = ch;  // 마지막줄 텍스트 출력을 위한 buf 저장
        }
        if (readCount == 16) fin.seekg(-16, ios::cur);  // 파일 포인터를 16진수 출력 이전으로 되돌림
        if (readCount > 16 && readCount <= 32) {
            cout << setw(2) << setfill(' ');
            if (isprint(ch)) cout << dec << char(ch);  // 문자로 출력하기 위한 조건
            else cout << '.';
        }
        // 줄바꿈 및 띄어쓰기 조건 검사
        if (readCount % 8 == 0) cout << setw(4) << setfill(' ') << ' ';
        if (readCount % 32 == 0) {
            cout << endl;
            readCount = 0;
        }
    }
    // buf를 사용하여 마지막 줄 텍스트 출력
    for (int i = readCount; i < 16; i++) {
        cout << setw(3) << setfill(' ');
        cout << ' ';  // 공백 출력
    }
    cout << setw(4) << ' ';  // 띄어쓰기
    for (int i = 1; i < readCount + 1 ; i++) {
        cout << setw(2);
        if (isprint(buf[i])) cout << dec << char(buf[i]);  // 문자로 출력하기 위한 조건
        else cout << '.';
        if (i % 8 == 0) cout << setw(4) << ' ';
    }
    cout << endl;

    fin.close();  // 입력 파일 닫기
}
