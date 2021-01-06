// 파일 포인터를 이용하여 파일 크기 알아내기
#include <iostream>
#include <fstream>

using namespace std;

long getFileSize(ifstream& fin) {
    fin.seekg(0, ios::end);    // get pointer를 파일의 맨 끝으로 이동
    long length = fin.tellg();  // get pointer의 위치를 알아냄
    return length;  // length는 파일의 크기와 동일
}

int main() {

    const char* file = "12-3_system.ini";

    ifstream fin(file);
    if (!fin) {  // 열기 실패 검사
        cout << file << " 열기 오류" << endl;
        return 0;
    }

    cout << file << "의 크기는 " << getFileSize(fin) << "바이트 입니다." << endl;

    fin.close();
}

/*

파일 포인터의 위치를 임의의 위치로 이동하기

istream& seekg(streampos pos)
  정수 값으로 주어진 절대 위치 pos로 get pointer를 이동

istream& seekg(streamoff offset, ios::seekdir seekbase)
  seekbase를 기준으로 offset 만큼 떨어진 위치로 get pointer를 이동

ostream& seekp(streampos pos)
  정수 값으로 주어진 절대 위치 pos로 put pointer를 이동

ostream& seekp(streamoff offset, ios::seekdir seekbase)
  seekbase를 기준으로 offset 만큼 떨어진 위치로 put pointer를 이동

streampos tellg()
  입력 스트림의 현재 get pointer의 값을 반환

streampos tellp()
  출력 스트림의 현재 put pointer의 값을 반환


seekbase로 사용되는 ios::seekdir 타입의 상수

seekbase        설명
ios::beg    파일의 처음 위치를 기준으로 파일 포인터을 움직인다.
ios::cur    현재 파일 포인터의 위치를 기준으로 파일 포인터를 움직인다.
ios::end    파일의 끝(EOF) 위치를 기준으로 파일 포인터를 움직인다.

*/
