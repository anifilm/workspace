// ifstream과 >> 연산자를 이용한 텍스트 파일 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 스트림 객체 생성 및 파일 열기
    ifstream fin;
    fin.open("./12-1_student.txt");
    if (!fin) {
        cout << "student.txt 파일을 열수 없습니다.";
        return 0;
    }

    char name[10], dept[20];
    int sid;

    // 파일 읽기
    fin >> name;  // 파일에 있는 문자열을 읽어 name 배열에 저장
    fin >> sid;   // 정수를 읽어 sid 정수형 변수에 저장
    fin >> dept;  // 문자열을 읽어 dept 배열에 저장

    // 읽은 텍스트를 화면에 출력
    cout << name << endl;
    cout << sid << endl;
    cout << dept << endl;

    fin.close();  // 파일 닫기
}

/*

파일 모드 상수

파일 모드        의미
ios::in         읽기 모드로 파일 열기
ios::out        쓰기 모드로 파일 열기
ios::ate        (at end) 쓰기 모드로 파일 열기, 열기 후 파일 포인터를 파일 끝에 둔다. 파일 포인터를 옮겨 파일 내의 임의의 위치에 쓸 수 있다.
ios::app        파일 쓰기 시에만 적용된다. 파일 쓰기 시마다. 자동으로 파일 포인터가 파일 끝으로 옮겨져서 항상 파일의 끝에 쓰기가 이루어진다.
ios::trunc      파일을 열 때, 파일이 존재하면 파일의 내용을 모두 지워 파일 크기가 0인 상태로 만든다. ios::out 모드를 지정하면 기본값으로 함께 지정된다.
ios::binary     바이너리 I/O로 파일을 연다. 이 파일 모드가 지정되지 않으면 기본값은 텍스트 I/O이다.


파일 모드 설정

void open(const char* filename, ios::openmode mode)
  mode로 지정된 파일 모드로 filename의 파일을 연다.

*/
