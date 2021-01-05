/*
Q1
int cin.get() 함수를 이용하여 키보드로부터 한 라인을 읽고 'a'가 몇 개인지 출력하는
프로그램을 작성하라.

*/
#include <iostream>

using namespace std;

int main() {

    int ch, a_count = 0;
    while ((ch = cin.get()) != EOF) {  // 키보드에서 문자 읽기
        cout.put(ch);  // 읽은 문자 출력
        if (ch == 'a') a_count++;
        if (ch == '\n') break;  // <Enter> 키가 입력된 경우 읽기 중단
    }
    cout << "\n입력된 문자에서 'a'가 " << a_count << "개 있습니다." << endl;

    return 0;
}
