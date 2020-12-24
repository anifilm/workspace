// Power 클래스에 ! 연산자 작성
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
    bool operator!();  // ! 연산자 함수 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

bool Power::operator!() {
    if (kick == 0 && punch == 0) return true;
    else return false;
}

int main() {

    Power a(0, 0), b(5, 5);
    if (!a) cout << "a의 파워가 0이다." << endl;  // ! 연산자 호출
    else cout << "a의 파워가 0이 아니다." << endl;
    if (!b) cout << "b의 파워가 0이다." << endl;  // ! 연산자 호출
    else cout << "b의 파워가 0이 아니다." << endl;

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
