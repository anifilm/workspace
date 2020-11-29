// 객체지향 정보은닉 이해하기 (hiding)
#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
    string value;
    int number;

public:
    KingInfo() {}

    void SetValue(const string value) {
        if (value.empty() == false)
            this->value = value;
        else
            cout << "잘못된 인자 입니다." << endl;
    }

    string GetValue() const {
        if (this->value.empty() == false)
            return this->value;
        else
            return "설정을 먼저 해야합니다.";
    }
};

int main() {

    KingInfo king_info1;
    king_info1.SetValue("조선 중종 이역");

    KingInfo king_info2;
    king_info2.SetValue("조선 인종 이호");

//  king_info1.value = "조전 명종 이환";

    cout << king_info1.GetValue() << endl;
    cout << king_info2.GetValue() << endl;

    return 0;
}
