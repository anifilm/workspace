// get(char*, int)을 이용한 문자열 입력
#include <iostream>
#include <cstring>  // strcmp() 함수를 사용하기 위함

using namespace std;

int main() {

    cout << "cin.get(char*, int)로 문자열을 읽습니다.\n" << endl;

    char cmd[80];
    while (true) {
        cout << "종료하려면 exit을 입력하세요: ";
        cin.get(cmd, 80);  // <Enter> 키까지 문자열 읽기 79개까지 문자열 읽음
        if (strcmp(cmd, "exit") == 0) {
            cout << "\n프로그램을 종료합니다." << endl;
            return 0;
        }
        else
            cin.ignore(1);  // 버퍼에 남아 있는 <Enter> 키 ('\n') 제거
    }
}

/*

문자열 입력
  istream에는 문자열을 읽을 수 있는 get() 함수도 있다. 다음은 문자열을 읽는 get() 함수의
  원형이다.

istream& get(char* s, int n)
  입력 스트림으로부터 n-1개의 문자을 읽어 배열 s에 저장하고 마지막에 '\0' 문자 삽입.
  입력 도중 '\n'을 만나면 '\0'을 삽입하고 문자열 반환

char str[10];
cin.get(str, 10);  // 최대 9개의 문자을 읽고 긑에 '\0'을 붙여 str 배열에 저장
cout << str;  // str을 화면에 출력

입력 도중 '\n'을 만날 때
  get()이 입력 도중 <Enter> 키 ('\n' 개행 문자)를 만날 때 주의해야 한다. 입력 스트림에서
  '\n' 문자를 만나면 읽기를 중단하고 문자열을 반환, '\n'이 입력 스트림 버퍼에 남아있다.
  만일 이 상태에서 다시 읽기를 하게 되면 입력 스트림에 남아있는 '\n'부터 읽기 시작하여
  아무것도 읽지 않고 바로 반환한다. 이 문제로 프로그램은 무한 루프에 빠질 수도 있다.
  문자열을 읽은 후 입력 스트림 버퍼에 남아있는 '\n' 문자를 제거하이 위해서 다음과 같이
  하면 된다.

cin.get(); 또는
cin.ignore(1);  // cin 버퍼에서 문자 1개 삭제

*/
