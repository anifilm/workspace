// get()을 이용한 한 줄의 문자 읽기
#include <iostream>

using namespace std;

int main() {

    cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다.\n" << endl;

    int ch;
    while ((ch = cin.get()) != EOF) {  // 키보드에서 문자 읽기
        cout.put(ch);  // 읽은 문자 출력
        if (ch == '\n') break;  // <Enter> 키가 입력된 경우 읽기 중단
    }

    return 0;
}

/*

문자 입력 1

int get()
  입력 스트림에서 문자를 읽어 반환. 오류나 EOF를 만나면 -1(EOF)를 반환

get()의 반환형은 왜 int형 일까?
  get()은 기본적으로 문자를 반환하지만, 입력 스트림의 끝을 만나게될 경우 EOF를 반환한다.
  EOF는 C++ 표준 헤더 파일에 "#define EOF -1"로 int 타입으로 선언되어 있다.
  이것이 get()의 반환형이 int인 이유이다.

*/
