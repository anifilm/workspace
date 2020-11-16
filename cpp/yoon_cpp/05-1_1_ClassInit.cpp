// SoSimple sim2(sim1);
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2)
        : num1(n1), num2(n2) {
    }
    // 복사 생성자 (copy constructor), 직접 정의하지 않아도 사용할 수 있다.
    explicit SoSimple(SoSimple& copy)
        : num1(copy.num1), num2(copy.num2) {
            cout << "called SoSimple(SoSimple& copy)" << endl;
    }
    void ShowSimpleData() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main() {

    SoSimple sim1(15, 30);
    cout << "생성 및 초기화 직전" << endl;
//  SoSimple sim2 = sim1; 또는
    SoSimple sim2(sim1);
    cout << "생성 및 초기화 직후" << endl;
    sim2.ShowSimpleData();

    return 0;
}

/*

변환에 의한 초기화! 키워드 explicit으로 막을 수 있다.

explicit SoSimple(SoSimple& copy)
    : num1(copy.num1), num2(copy.num2) {
        cout << "called SoSimple(SoSimple& copy)" << endl;
}

//  SoSimple sim2 = sim1;   // 더 이상 묵시적 변환이 발생하지 않아서
                            // 대입 연산자를 이용한 객체의 생성 및 초기화는 불가능하다.
    SoSimple sim2(sim1);    // 직접 초기화 방식으로 객체를 생성하자.

*/
