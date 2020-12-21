/*
Q3
string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇개 있는지
출력하는 프로그램을 작성해 보자.
  (실행 결과 생략...)

  (1) 문자열에서 'a'를 찾기 위해 string 클래스의 멤버 at()나 []를 이용하여 작성하라.
*/
#include <iostream>

using namespace std;

int main() {

    string s;
    cout << "문자열 입력: ";
    getline(cin, s, '\n');

    int count_a = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'a') count_a++;
    }
    cout << "문자 a는 " << count_a << "개 있습니다." << endl;

    return 0;
}
