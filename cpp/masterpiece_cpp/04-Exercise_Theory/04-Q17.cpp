/* 이론 문제
Q17
string s1 = "123"; string s2 = "246"; 일 때, a와 b의 문자열 속에 있는 수를 더하여
369를 출력하고자 한다. 아래 빈칸을 채워라.
  int n = ____________(s1);
  int m = ____________(s2);
  cout << n + m << endl;

*/
#include <iostream>

using namespace std;

int main() {

    string s1 = "123";
    string s2 = "246";
    int n = stoi(s1);
    int m = stoi(s2);
    cout << n + m << endl;

    return 0;
}
