// SoSimple sim2(sim1);  복사 생성자 호출
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
    // 복사 생성자 (copy constructor), 직접 정의하지 않아도 자동 생성되어 사용 가능하다.
    SoSimple(const SoSimple& copy)
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
//  SoSimple sim2 = sim1;    // SoSimple sim2(sim1);으로 변환!
    SoSimple sim2(sim1);     // 복사 생성자 호출
    cout << "생성 및 초기화 직후" << endl;
    sim2.ShowSimpleData();

    return 0;
}
