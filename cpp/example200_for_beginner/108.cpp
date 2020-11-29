// 클래스 생성자 초기화 리스트
#include <iostream>
#include <string>

using namespace std;

class TempClass {
private:
    int number1 = 1;
    const int number2 = 2;          // 생성될때 한번 초기화 가능, 재할당은 불가
    static const int number3 = 3;   // 초기화 및 재할당 둘다 불가능
    string name = "조다: 장수왕 아들";

public:
    TempClass()
        : number1 {10}, number2 {20}, name {"나운: 문자명왕 이름"} {
    }

    void Print() {
        cout << number1 << ", " << number2 << ", " << number3 << ", " << name << endl;
    }
};

int main() {

    TempClass tc;
    tc.Print();

    return 0;
}
