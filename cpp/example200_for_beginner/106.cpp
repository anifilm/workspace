// 클래스 복수 생성자 정의하기
#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
    string value;

public:
    KingInfo() {
        this->value = "조선 성종 이혈";
    }

    KingInfo(const string value) {
        this->value = value;
    }

    KingInfo(const int value) {
        this->value = "연산군 즉위연도: ";
        this->value += to_string(value);
    }

    string GetValue() const {
        return this->value;
    }
};

int main() {

    KingInfo king_info1;
    KingInfo king_info2("조선 연산군 이융");
    KingInfo king_info3(1494);

    cout << king_info1.GetValue() << endl;
    cout << king_info2.GetValue() << endl;
    cout << king_info3.GetValue() << endl;

    return 0;
}
