// 클래스 정의하기 (class)
#include <iostream>

using namespace std;

class KingInfo {
private:
    string name;

public:
    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
};

int main() {

    KingInfo king_info;
    king_info.SetName("조선 세조 이유");

    cout << king_info.GetName() << endl;

    return 0;
}
