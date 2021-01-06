/*
Q6
system.ini를 system.txt로 복사하는 동안 10%를 진행할 때 마다 '.'과 바이트 크기를 다음과
같이 출력하는 프로그램을 작성하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <fstream>

using namespace std;

long getFileSize(ifstream& fin) {
    fin.seekg(0, ios::end);
    long length = fin.tellg();
    fin.seekg(0, ios::beg);
    return length;
}

int main() {

    const char* srcFile = "./12-Q2_system.ini";
    const char* destFile = "./12-Q6_system.txt";

    ifstream fin(srcFile, ios::in);  // 읽기 모드로 파일 열기
    if (!fin) {  // 열기 실패 검사
        cout << srcFile << " 열기 오류";
        return 0;
    }
    long file_size = getFileSize(fin);  // 파일 사이즈 가져오기
    int buf_size = file_size / 10;      // 10%의 버퍼 사이즈 계산

    fstream fout(destFile, ios::out);  // 쓰기 모드로 파일 열기
    if (!fout) {  // 열기 실패 검사
        cout << destFile << " 열기 오류";
        return 0;
    }

    cout << "복사 시작..." << endl;
    int count = 0;
    char buf[buf_size];   // 블록 단위로 읽어들일 버퍼
    while (!fin.eof()) {  // 파일 끝까지 읽는다.
        fin.read(buf, buf_size);  // 최대 32바이트를 읽어 배열 buf에 저장
        int n = fin.gcount();     // 실제 읽은 바이트 수 알아냄
        fout.write(buf, n);  // 버퍼에 있는 n개의 바이트를 화면에 출력
        cout << '.' << buf_size << "B " << (count += 10) << '%' << endl;
    }
    cout << file_size << "B 복사 완료" << endl;

    fin.close();   // 입력 파일 닫기
    fout.close();  // 출력 파일 닫기
}
