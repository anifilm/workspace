#include <iostream>

using namespace std;

int main() {
    //              0123456789012
    string names = "Hello, world!";

    cout << size(names) << endl;
    cout << names.size() << endl;
    cout << names.length() << endl;
    cout << names.capacity() << endl;

    return 0;
}

/*

string 클래스의 연산자 (s, s1, s2는 모두 string 객체)
string s = "C++"; string s1 = "C"; string s2 = "Java"; 일 때

연산자           설명                                     사용 예            결과
s1 = s2         s2를 s1에 치환                            s1 = s2           s1 = "Java"
s[]             s의 [] 인덱스에 있는 문자                  char c = s[1]     c = '+'
s1 + s2         s1과 s2를 연결한 새로운 문자열             s1 + s2           "CJava"
s1 += s2        s1에 s2 문자열 연결                       s1 += s2          s1 = "CJava"
stream << s     s를 stream 스트림에 출력                  cout << s;        "C++" 출력
stream >> s     stream에서 문자열을 s에 입력               cin >> s;         문자열 입력
s1 == s2        s1과 s2가 같은 문자열이면 true             s1 == s2          false
s1 != s2        s1과 s2가 다른 문자열이면 true             s1 != s2          true
s1 < s2         s1이 사전 순으로 s2 보다 앞에 오면 true     s1 < s2           true
s1 > s2         s1이 사전 순으로 s2 보다 뒤에 오면 true     s1 > s2           false
s1 <= s2        s1이 s2와 같거나 앞에 오면 true            s1 <= s2          true
s1 >= s2        s1이 s2와 같거나 뒤에 오면 true            s1 >= s2          false

*/
