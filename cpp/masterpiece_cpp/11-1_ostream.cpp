// ostream의 멤버 함수를 이용한 문자 출력
#include <iostream>

using namespace std;

int main() {

    // "Hi!"를 출력하고 다음 줄로 넘어간다.
    cout.put('H');
    cout.put('i');
    cout.put(33);  // ASCII 코드 33은 '!' 문자임
    cout.put('\n');

    // "C++ "을 출력한다.
    cout.put('C').put('+').put('+').put(' ');  // put() 함수를 연결하여 사용할 수 있다.

    char str[] = "I love programming";
    cout.write(str, 6);  // str 배열의 6개 문자 "I love"를 스트림에 출력

    return 0;
}

/*

ostream의 멤버 함수를 이용한 문자 출력

ostream& put(char ch)
  ch의 문자를 스트림에 출력

ostream& write(char* str, int n)
  str 배열에 있는 n개의 문자를 스트림에 출력

ostrea& flush()
  현재 스트림 버퍼이 있는 내용 강제 출력

*/
