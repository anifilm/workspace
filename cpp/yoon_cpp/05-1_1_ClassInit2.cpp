// SoSimple sim2 {sim1}; (유니폼 초기화 사용)
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2)
        : num1 {n1}, num2 {n2} {
    }
    // 복사 생성자 (copy constructor)
    SoSimple(const SoSimple& copy)
        : num1 {copy.num1}, num2 {copy.num2} {
            cout << "called SoSimple(SoSimple& copy)" << endl;
    }
    void ShowSimpleData() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main() {

    SoSimple sim1 {15, 30};
    cout << "생성 및 초기화 직전" << endl;
    SoSimple sim2 {sim1};
    cout << "생성 및 초기화 직후" << endl;
    sim2.ShowSimpleData();

    return 0;
}
