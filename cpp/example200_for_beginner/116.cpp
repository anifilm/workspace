// 클래스 상속 2 Has-A 관계
#include <iostream>

using namespace std;

class Landload {
public:
    void IamLandload() {
        cout << "건물주 입니다." << endl;
    }
};

class Tenant {
public:
    void IamTenant() {
        cout << "세입자 입니다." << endl;
    }
};

class Nation : public Landload, public Tenant {
public:
    bool is_landload;

    void Who() {
        cout << "저는 ";
        if (is_landload == true)
            IamLandload();
        else
            IamTenant();
    }
};

int main() {

    Nation nation;
    nation.is_landload = true;
    nation.Who();

    return 0;
}
