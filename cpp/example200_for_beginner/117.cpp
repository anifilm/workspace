// 클래스 상속 3 Not-A 관계
#include <iostream>

using namespace std;

class Landload {
public:
    void IamLandload() {
        cout << "건물주 입니다." << endl;
    }
};

class MaleMonkey {
public:
    void Favorite() {
        cout << "Favorite: Famale Monkey" << endl;
    }
};

class Nation : public Landload {
public:
    void Who() {
        cout << "안녕하세요. ";
        IamLandload();
    }
};

int main() {

    Nation nation;
    nation.Who();

    return 0;
}
