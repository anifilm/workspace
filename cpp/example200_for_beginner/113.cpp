// 객체지향 캡슐화 이해하기 (Encapsulation)
#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
    string name;
    string son;
    int ascend;

public:
    KingInfo() {}

    void SetValue(const string name, const string son, int ascend) {
        this->name = name;
        this->son = son;
        this->ascend = ascend;
    }

    string GetNameSon() const {
        return this->name + "의 아들 " + this->son;
    }

    string GetNameAscend() const {
        return this->name + " 즉위 연도 " + to_string(this->ascend) + "년";
    }
};

int main() {

    KingInfo king_info;
    king_info.SetValue("선조", "광해군", 1567);

    cout << king_info.GetNameSon() << endl;
    cout << king_info.GetNameAscend() << endl;

    return 0;
}
