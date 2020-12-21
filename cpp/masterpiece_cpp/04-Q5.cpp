/*
Q5
string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 입력받고 글자 하나만 랜덤하게
수정하여 출력하는 프로그램을 작성하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand((unsigned)time(0));   // 시작할 때마다, 다른 랜덤수를 발생기키기 위한 seed 설정
//  int n = rand();     // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생

    string s;
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
    while (true) {
        cout << ">> ";
        getline(cin, s, '\n');
        if (s == "exit") break;
        int rand_pos = rand() % s.length(); // 랜덤한 문자열 위치
        char rand_ch = rand() % 26 + 97;    // 랜덤한 소문자 발생
        s[rand_pos] = rand_ch;
        cout << s << endl;
    }

    return 0;
}
