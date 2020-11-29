// 클래스 생성자 정의하기
#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
    string name;

public:
    KingInfo() {
        this->name = "조선 예종 이황";
    }

    string GetName() const {
        return name;
    }
};

int main() {

    KingInfo king_info;

    cout << king_info.GetName() << endl;

    return 0;
}
