// 텍스트 파일 연결
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const char* firstFile = "./12-4_student.txt";
    const char* secondFile = "./12-3_system.ini";

    fstream fout(firstFile, ios::out | ios::app);  // 쓰기 모드로 파일 열기
    if (!fout) {  // 열기 실패 검사
        cout << firstFile << " 열기 오류";
        return 0;
    }

    fstream fin(secondFile, ios::in);  // 읽기 모드로 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << secondFile << " 열기 오류";
        return 0;
    }

    int ch;
    while ((ch = fin.get()) != EOF) {  // 파일 끝까지 문자 읽기
        fout.put(ch);  // 읽은 문자 기록
    }

    fin.close();   // 입력 파일 닫기
    fout.close();  // 출력 파일 닫기
}
