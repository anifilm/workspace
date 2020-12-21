// new와 delete 연산자
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() { radius = 1; }
};

int main() {

/* new와 delete의 기본 활용 */
    int* pInt = new int;    // int 타입의 정수 공간 할당
    char* pChar = new char; // char 타입의 문자 공간 할당
    Circle* pCircle = new Circle(); // Circle 클래스 타입의 객체 할당

    delete pInt;    // 할당받은 정수 공간 반환
    delete pChar;   // 할당받은 문자 공간 반환
    delete pCircle; // 할당받은 객체 공간 반환

/* 동적 할당 메모리 초기화 */
    int* pInt2 = new int(20);        // 20으로 초기화된 int 타입의 정수 공간 할당
    char* pChar2 = new char('a');    // 'a'로 초기화된 char 타입의 문자 공간 할당

    delete pInt2;
    delete pChar2;

/* delete 사용시 주의 */
    int n;
    int* p1 = &n;
    delete p1;  // 실행 오류, p가 가리키는 메모리는 동적 할당받은 것이 아님

    int *p2 = new int;

    delete p2;  // 정상적인 메모리 반환
    delete p2;  // 실행 오류, 이미 반환된 메모리를 추가로 반환할 수 없다.

    return 0;
}
