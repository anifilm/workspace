// 문자열 다루기
#include <iostream>

using namespace std;

int main() {

/* 문자열 치환 */
    string a = "Java", b = "C++";
    a = b;  // a = "C++"이 된다. a는 b를 복사한 문자열을 가진다.

/* 문자열 비교
  문자열 비교는 compare() 함수를 이용한다. 이 함수는 두 문자열이 같으면 0,
  str보다 사전 순으로 앞에 오면 음수, 뒤에 오면 양수를 리턴한다. */
    string name = "Kitae";
    string alias = "Kito";
    int res = name.compare(alias);    // name과 alias를 비교한다.
    if (res == 0) cout << "두 문자열이 같다.";     // name과 alias가 동일
    else if (res < 0) cout << name << " < " << alias << endl;  // name이 앞에 온다.
    else cout << alias << " < " << name << endl;  // name이 뒤에 온다.
//  출력 예시
//  Kitae < Koto

/* 문자열 비교는 다음과 같이 비교 연산자를 이용하면 보다 효과적이다. */
    if (name == alias) cout << "두 문자열이 같다." << endl;
    else if (name < alias) cout << name << "가 " << alias << "보다 사전에서 먼저 나온다." << endl;

/* 문자열 연결
  두 개의 문자열을 연결하기 위해 append() 함수를 이용한다. 다음은 "I" 문자열 끝에 "love"를 추가하는 예이다. */
    string a("I");
    a.append(" love");  // a = "I love"

/* 문자열 연결은 +, += 연산자를 이용하여 쉽게 작성할 수 있다. */
    string a("I love C++");
    string b(".");
    string c;
    c = a + b;  // a, b 문자열에는 변화가 없고, c = "I love C++."로 변경됨
    c += b;     // b 문자열에는 변화가 없고, c = "I love C++.."로 변경됨

/* 문자열 삽입
  string 클래스는 문자열에 새로운 문자열이나 문자의 삽입 삭제가 가능하며, 문자열의 일부분을 다른 문자들로 변경할 수 있다.
  다음은 insert() 함수를 이용하여 a의 인덱스 2위치에 "really" 문자열을 삽입하는 코드이다. */
    string a("I love C++");
    a.insert(2, "really ");     // a = "I really love C++"

/* 다음은 replace() 함수를 이용하여 a의 인덱스 2부터 11개의 문자("really love")를 "study"로 대치한다. */
    a.replace(2, 11, "study");  // a = "I study C++"
    cout << a << endl;

/* 문자열 길이
  문자열 길이는 문자열에 포함된 문자 개수를 말하며, length()와 size() 함수는 문자열의 길이를 반환한다.
  길이와는 달리 string 객체의 내부 메모리 용량을 반환하는 capacity()도 있다. 용량은 자동으로 조절되므로 개발자가 신경 쓸 필요 없다.
  다음은 길이과 용량을 반환하는 코드의 예이다. */
    string a("I study C++");
    int length = a.length();      // "I study C++"의 문자 개수는 11이다. length = 11
    int size = a.size();          // length()와 동일하게 동작, size = 11
    int capacity = a.capacity();  // 스트링 a5의 현재 용량 capacity = 31, 변할 수 있다.

/* 문자열 삭제
  erase()는 문자열의 일부분을 삭제하고 clear()는 완전히 삭제한다. */
    string a("I love C++");
    a.erase(0, 7);  // a의 처음부터 7개의 문자 삭제, a = "C++"로 변경
    a.clear();      // a = ""

/* 서브 서브스트링
  substr() 함수를 사용하면 문자열에서 일부분을 발췌한 문자열(서브스트링)을 얻을 수 있다. 다음 예를 보자.
  substr() 실행 후 b의 문자열은 변화가 없음에 유의하기 바란다. */
    string b = "I love C++";
    string c = b.substr(2, 4);  // b의 인덱스 2에서 4개의 문자 리턴, c = "love"
    string d = b.substr(2);     // b의 인덱스 2에서 끝까지 문자열 리턴, d = "love C++"

/* 문자열 검색
  문자열 내에 특정 문자열이 존재하는지 검색하는 기능은 많은 응용에서 사용된다.
  find() 함수는 문자열에서 특정 문자나 문자열을 발견하면 첫 번째 인덱스를 반환한다. 발견하지 못하면 -1을 반환한다.
  다음 예를 보자. */
    string e = "I love love C++";
    int index = e.find("love");       // e에서 "love" 검색, 인덱스 2 리턴
    index = e.find("love", index+1);  // e의 인덱스 3부터 "love" 검색, 인덱스 7 리턴
    index = e.find("C#");             // e에서 "C#"을 발견할 수 없음, -1 리턴
    index = e.find('v', 7);           // e의 인덱스 7부터 'v' 문자 검색, 인덱스 9 리턴

/* 문자열의 각 문자 다루기
  at() 함수와 [] 연산자는 둘 다 문자열의 특정 위치에 있는 문자를 반환한다.
  at() 함수와 달리 [] 연산자를 이용하면 특정 문자를 다른 문자로 수정할 수 있다. 다음 예를 보자. */
    string f("I love C++");
    char ch1 = f.at(7);  // 문자열 f의 인덱스 7에 있는 문자 리턴, ch1 = 'C'
    char ch2 = f[7];     // f.at(7)과 동일한 표현, ch2 = 'C'
    f[7] = 'D'; //  f는 "I love D++"

/* 문자열 f의 마지막 문자는 다음과 같이 얻을 수 있다. */
    char ch3 = f.at(f.length()-1);  // ch3은 '+'

/* 문자열의 숫자 변환, stoi()
  C++11 표준부터는 문자열을 숫자로 변환하는 전역 함수 stoi()를 추가하였다. stoi() 함수는 다음과 같이 사용한다. */
    string year = "2014";
    int n = stoi(year);  // n은 정수 2014 값을 가짐
//  int n = atoi(year.c_str());  // 비주얼 C++ 2008 이하

/* 문자 다루기
  string은 문자열만 다루지 문자를 다루는 기능은 없다. 문자를 다루는 함수는 <locale> 헤더 파일에 존재한다.
  다음은 <locale> 헤더 파일에 있는 toupper(), isdigit(), isalpha() 함수를 사용하는 예이다. */
    string a = "hello";
    for (int i = 0; i < a.length(); i++) a[i] = toupper(a[i]);  // a가 "HELLO"로 변경
    cout << a;  // "HELLO" 출력
    if (isdigit(a[0])) cout << "숫자";
    else if (isalpha(a.at(0))) cout << "문자";  // a[0]은 문자 'H'

/* 연속적인 문자열 다루기
  append, replace 등 string의 많은 멤버 함수들의 리턴 타입은 string& 이다.
  이는 다음과 같은 연속적인 문자열 다루기가 가능하다. */
    string a("I love ");
    a.append("Jane").append(" and ").append(" Helen");
//  a = "I love Jane and Helen"이 된다.

    return 0;
}
