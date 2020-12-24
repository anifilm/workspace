// 전위 ++ 연산자 작성
#include <iostream>

using namespace std;

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick; this->punch = punch;
    }
    void show();
    Power& operator++();  // 전위 ++ 연산자 함수 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator++() {  // 전위 ++ 연산자 멤버 함수 구현
    kick++;
    punch++;
    return *this;  // 변경된 객체 자신 (객체 a)의 참조 리턴
}

int main() {

    Power a(3, 5), b;
    a.show();
    b.show();
    b = ++a;  // 전위 ++ 연산자 사용 (operator++() 함수 호출)
    a.show();
    b.show();

    return 0;
}

/*

Power 클래스의 멤버로 선언되는 단항 연산자 (Power 객체 a, b에 대해)

연산자     사례         컴파일러에 의해    클래스의 연산자 멤버 함수
                       변형된 호출식
  !         !a         a.!()             bool   operator !  ()
  ~         ~a         a.~()             Power  operator ~  ()
전위 ++    ++a         a.++()            Power& operator ++ ()      // 참조 반환
후위 ++      a++       a.++(0)           Power  operator ++ (int x)
전위 --    --a         a.--()            Power& operator -- ()      // 참조 반환
후위 --      a--       a.--(0)           Power  operator -- (int x)

*/
