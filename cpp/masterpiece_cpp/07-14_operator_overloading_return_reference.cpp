// 참조를 반환하는 << 연산자 작성
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
    Power& operator<<(int n);  // 연산 후 Power 객체의 참조 반환
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator<<(int n) {
    kick += n;
    punch += n;
    return *this;  // 이 객체의 참조를 반환
}

int main() {

    Power a(1, 2);
    a << 3 << 5 << 6;  // 객체 a에 3, 5, 6이 순서대로 더하여 진다.
    a.show();

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
