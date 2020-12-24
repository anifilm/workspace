// 두 개의 Power 객체를 더하는 += 연산자 작성
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
    Power& operator+=(Power op2);  // += 연산자 함수 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator+=(Power op2) {  // += 연산자 멤버 함수 구현
    kick = kick + op2.kick;  // kick 더하기
    punch = punch + op2.punch;  // punch 더하기
    return *this;  // 합한 결과 반환
}

int main() {

    Power a(3, 5), b(4, 6), c;
    a.show();
    b.show();
    c = a += b; // 파워 객체 더하기 (operator+=() 멤버 함수 호출)
    a.show();
    c.show();

    return 0;
}

/*

Power 클래스의 멤버로 선언되는 이항 연산자 (Power 객체 a, b에 대해)

연산자  사례         컴파일러에 의해    클래스의 연산자 멤버 함수
                    변형된 호출식
+       a +  b      a.+ (b)           Power  operator +  (Power op2)
!=      a != b      a.!=(b)           bool   operator != (Power op2)
+=      a += b      a.+=(b)           Power& operator += (Power op2)
+       a +  3      a.+ (3)           Power  operator +  (int b)
>       a >  3      a.> (3)           bool   operator >  (int b)
+=      a += b      a.+=(b)           Power& operator += (int b)

위에서 +, !=, += 연산자 함수는 다음과 같이 참조 매개 변수로 작성할 수 있다.
 Power operator +  (Power& op2)
  bool operator +  (Power& op2)
Power& operator += (Power& op2)

*/
