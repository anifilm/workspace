// string 객체 생성 및 출력
#include <iostream>

using namespace std;

int main() {

/* string 객체 생성 */
    string str; // 빈 문자열을 가진 스트링 객체
    string address("서울시 성북구 삼선동 389");  // 문자열 리터럴로 초기화
    string copyAddress(address);    // address를 복사항 copyAddress 생성

    // C-스트링(char[] 배열)으로부터 스트링 객체 생성
    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};   // C-스트링
    string title(text); // "Love C++"을 가진 string 객체 생성

/* string 객체가 가진 문자열 출력 */
    cout << address << endl;    // "서울시 성북구 삼선동 389" 출력
    cout << title << endl;  // "Love C++ 출력"

/* string 객체의 동적 생성 */
    string* p = new string("C++");  // 스트링 객체 동적 생성
    cout << *p; // "C++" 출력
    p->append(" Great!!");  // p가 가리키는 스트링이 "C++ Great!!"가 됨
    cout << *p; // "C++ Great!!" 출력
    delete p;   // 스트링 객체 반환

    return 0;
}
