/* 문제 03-2 [클래스의 정의]
문제 2
문자열 정보를 내부에 저장하는 Printer라는 이름의 클래스를 디자인하자. 이 클래스의 두 가지
기능은 다음과 같다.
 - 문자열 저장
 - 문자열 출력

아래의  main 함수와 실행의 예에 부합하는 Printer 클래스를 정의하되, 이번에도 역시 멤버변수
는 private으로, 멤버함수는 public으로 선언하자.
int main(void) {
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}

[실행의 예]
Hello world!
I love C++
*/
#include <iostream>
#include <cstring>

using namespace std;

class Printer {
private:
    char myStr[100];
public:
    void SetString(const char* p_str);
    void ShowString();
};

void Printer::SetString(const char* p_str) {
    strcpy(myStr, p_str);
}

void Printer::ShowString() {
    cout << myStr << endl;
}

int main() {

    Printer pnt;

    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();

    return 0;
}
