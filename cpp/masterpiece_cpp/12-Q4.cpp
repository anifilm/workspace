/*
Q4
영문 텍스트 파일을 읽고 영문 글자를 모두 대문자로 변환하여 저장하라. system.ini를 읽고
대문자로 변환한 파일을 system.txt 파일로 저장하여 테스트 하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* srcFile = "./12-Q2_system.ini";
    const char* destFile = "./12-Q4_system.txt";

    fstream fin(srcFile, ios::in);  // 읽기 모드로 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << srcFile << " 열기 오류";
        return 0;
    }

    fstream fout(destFile, ios::out);  // 쓰기 모드로 파일 열기
    if (!fout) {  // 열기 실패 검사
        cout << destFile << " 열기 오류";
        return 0;
    }

    int ch;
    while ((ch = fin.get()) != EOF) {  // 파일 끝까지 문자 읽기
        ch = toupper(ch);  // 읽은 문자를 대문자로 변환
        fout.put(ch);  // 문자를 파일에 쓰기
    }
    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;

    fin.close();   // 입력 파일 닫기
    fout.close();  // 출력 파일 닫기
}
