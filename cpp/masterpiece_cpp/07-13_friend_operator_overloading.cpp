// ++ 연산자 함수를 프렌드로 작성
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
    friend Power& operator++(Power& op);        // 전위 ++ 연산자 함수 프렌드 선언
    friend Power operator++(Power& op, int x);  // 후위 ++ 연산자 함수 프렌드 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& operator++(Power& op) {  // 전위 ++ 연산자 함수 구현
    op.kick++;
    op.punch++;
    return op;  // 연산 결과 반환
}

Power operator++(Power& op, int x) {  // 후위 ++ 연산자 함수 구현
    Power tmp = op;  // 변경하기 전의 op 상태 저장
    op.kick++;
    op.punch++;
    return tmp;  // 변경 이전의 op 반환
}

int main() {

    Power a(3, 5), b;
    b = ++a;  // 전위 ++ 연산자 사용 (operator++(Power& op) 함수 호출)
    a.show();
    b.show();
    b = a++;  // 후위 ++ 연산자 사용 (operator++(Power& op, int x) 함수 호출)
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
